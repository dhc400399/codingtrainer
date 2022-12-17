import sys
m,n=map(int,sys.stdin.readline().split())
# 소수 값 저장을 위한 리스트 선언 
prime_check=[0]*(n+1)
# index에 맞는 값으로 초기화 
for i in range(2,n+1):
    prime_check[i]=i
# prime_check[i]!=0인 경우에 i의 배수들은 제거(0으로 초기화)
for i in range(2,n+1):
    if prime_check[i]!=0:
        for j in range((i*2),n+1,i):
            prime_check[j]=0
# prime_check[i]!=0 => 소수 
for i in range(m,n+1):
    if prime_check[i]!=0:
        print(prime_check[i])