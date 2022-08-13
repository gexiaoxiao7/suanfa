def lengthOfLastWord(self, s: str) -> int:
    strList = s.split(' ')
    temp = []
    for item in strList:
        if item != '':
            temp.append(item)
    return len(temp[-1])

if __name__ == '__main__':
    print("   fly me   to   the moon  ".split(' '))