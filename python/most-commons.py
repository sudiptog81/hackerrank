from collections import Counter, OrderedDict

class OrderedCounter(Counter, OrderedDict):
    pass

if __name__ == '__main__':
    s = input()
    for (a, b) in OrderedCounter(sorted(s)).most_common(3):
        print (a, b)
