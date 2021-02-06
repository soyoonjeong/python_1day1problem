# enumerate
- 반복문 사용 시 몇 번째 반복문인지 확인이 필요할 수 있습니다 
- 인덱스 번호와 컬렉션의 원소를 tuple형태로 반환합니다.

```python
li = ['s','o','y','o','o','n']
for p in enumerate(li):
  print(p)
 
#output
(0, 's')
(1, 'o')
(2, 'y')
(3, 'o')
(4, 'o')
(5, 'n')
```
- 튜플이 아닌 변수에 차례로 인덱스 번호와 컬렉션의 원소를 넣어줘도 된다.
```python
li = ['s', 'o', 'y', 'o', 'o', 'n']
for idx, letter in enumerate(li):
    print(idx, "와", letter)

#output
0 와 s
1 와 o
2 와 y
3 와 o
4 와 o
5 와 n
```
