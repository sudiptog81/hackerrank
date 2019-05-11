S = input() == 0 or set(input().split())
[getattr(S, input().split()[0])(input().split()) for i in range(int(input()))]
print(sum(map(int, S)))
