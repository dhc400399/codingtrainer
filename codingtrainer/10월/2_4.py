
def recursive(m):
    print("_" * (4 * (n - m)) + '"재귀함수가 뭔가요?"')

    if not m:
        print("_" * (4 * (n - m)) + '"RECURSION FUNCTION은 자기 자신을 호출한단다"')
        print("_" * (4 * (n - m)) + "라더군.")
        return

    print("_" * (4 * (n - m)) + '"그걸 왜 나한테 물어보는지 모르겠지만 교수님께 가보렴')
    print("_" * (4 * (n - m)) + "교수님께서는 나보다 훨씬 똑똑하고 지혜로우신 분이란다.")
    print("_" * (4 * (n - m)) + '갑자기 배고프네 저녁 뭐 먹고 싶니?"')
    recursive(m - 1)
    print("_" * (4 * (n - m)) + "라더군.")


n = int(input())
print("어느 한 아주대생이 코딩 트레이너 C씨를 찾아간다.")
recursive(n)