import random
inpq = ['input00', 'input01', 'input02', 'input03', 'input04', 'input05', 'input06', 'input07', 'input08', 'input09', 'input10', 'input11', 'input12', 'input13', 'input14', 'input15', 'input16', 'input17', 'input18', 'input19', 'input20', 'input21', 'input22', 'input23', 'input24',
        'input25', 'input26', 'input27', 'input28', 'input29', 'input30']
inp = ['input31', 'input32', 'input33', 'input34', 'input35', 'input36', 'input37', 'input38', 'input39',
       'input40', 'input41', 'input42', 'input43', 'input44', 'input45', 'input46', 'input47', 'input48', 'input49']
op = ['output00', 'output01', 'output02', 'output03', 'output04', 'output05', 'output06', 'output07', 'output08', 'output09', 'output10', 'output11', 'output12', 'output13', 'output14', 'output15', 'output16', 'output17', 'output18', 'output19', 'output20', 'output21', 'output22', 'output23', 'output24',
      'output25', 'output26', 'output27', 'output28', 'output29', 'output30', 'output31', 'output32', 'output33', 'output34', 'output35', 'output36', 'output37', 'output38', 'output39', 'output40', 'output41', 'output42', 'output43', 'output44', 'output45', 'output46', 'output47', 'output48', 'output49']

for x in inp:
    l = []
    f = open(f'{x}.txt', 'w')
    n = random.randint(1, 1000)
    m = random.randint(1, n)
    for i in range(m):
        x = random.randint(1, n)
        l.append(x)
    s = set(l)
    f.write(str(n)+" "+str(len(s))+"\n")
    #print("{} {}".format(n, len(s)))
    for j in s:
        f.write(str(j)+" ")
    print()
    f.close()
