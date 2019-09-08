#include <iostream>
#include <map>
using namespace std;

map <string, string> tagMap;

void createMap(int &n, string pretag) {
    // break out of recursion if n = 0
    if(!n)
        return;
    
    int i = 1, j;
    string line, tag, attr, value;

    // read the entire line including spaces
    // as cin shall only read the first word
    getline(cin, line);
    

    if(line[i] == '/')
    {        
        // calculate length of the tag name    
        while(line[i] != '>')
            i++;

        // update tag to the actual tag name
        // if the length of the tag is not 0
        if(pretag.size() > i - 2)
            tag = pretag.substr(0, pretag.size() - i + 1);

        // update tag to a null string in case
        // length of the tag is 0
        else
            tag = "";
    } // find closing tag and update tag

    else {
        // get the tag name and assign it to tag                    
        while(line[i] != ' ' && line[i] != '>')
            i++;
        tag = line.substr(1, i - 1);

        // handle child tags within parent
        if(pretag != "")
            tag = pretag + "." + tag;
        
        while(line[i] != '>')
        {
            // calculate length of attribute
            // key and assign it to attr
            j = ++i;
            while(line[i] != ' ')
                i++;
            attr = line.substr(j, i - j);
            
            // calculate length of attribute
            // content and assign it to value
            while(line[i]!='\"')
                i++;
            j = ++i;
            while(line[i]!='\"')
                i++;
            value = line.substr(j, i++ - j);

            // populate the key - value store
            tagMap[tag + "~" + attr] = value;
        }
    } // find opening tag and add attributes

    // call self recursively until number of
    // sloc is reached at which point, recur
    // sion breaks
    createMap(--n, tag);
}

int main() {
    int n, q;
    string attr, value;

    // get number of sloc and queries
    cin >> n >> q;

    // discard stray characters like
    // carriage returns from istream
    // left by cin used above
    cin.ignore();

    // create a key - value store
    createMap(n,"");
    
    // find tag and attribute in the
    // key - value store & print them
    while(q > 0)
    {
        cin >> attr;
        value = tagMap[attr];
        if(value == "")
            value = "Not Found!";
        cout << value << endl;
        q--;
    }

    return 0;
}