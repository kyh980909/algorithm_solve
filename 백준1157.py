case = input().lower()

case_set = set(case)

if len(case) < 2:
    print(case.upper())
else:
    result = ''
    max_cnt = 0
    cnt_list = []
    for x in case_set:
        cnt = case.count(x)
        cnt_list.append(cnt)
        if max_cnt < cnt:
            max_cnt = cnt
            result = x
    sort = sorted(cnt_list, reverse=True)
    if(sort[0] == sort[1]):
        print('?')
    else:
        print(result.upper())
