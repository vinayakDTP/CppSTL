


def char_frequencyl(str1):
    dict = {}
    keys = dict
    for n in str1:
        dict[n]+=1
    return dict



freq = char_frequencyl('google')
print(freq)