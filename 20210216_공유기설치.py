n,c = map(int, input().split())
house = []*n
maximum =0
for i in range(n):
    house[i]=int(input())
for i in range(n-1):
    if house[i]>house[i+1]:
        tmp = house[i]
        house[i] = house[i+1]
        house[i+1]=tmp
