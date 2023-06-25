def solution (s):
    for i in s:
        if(s.index(i) == s.rindex(i)):
            return s.index(i)
    return -1

def main():
    print(solution("abcda"))