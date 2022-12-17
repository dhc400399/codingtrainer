def get_pow_2_list(max_n):
    return [pow(2, n) for n in range(max_n + 1)]


def is_pow_2(N):
    is_pow = False
    pow_list = get_pow_2_list(max_n=30)
    
    if N in pow_list:
        is_pow = True
        
    return is_pow


if __name__ == "__main__":
    N = int(input())
    
    print(int(is_pow_2(N)))