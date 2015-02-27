def fu():
    key = raw_input("Enter the key")
    p_text = raw_input("Enter the plain text")
    print key
    print p_text
    rest = ''
    alphabets = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    for i in alphabets:
        if i not in key:
            rest = rest+i
    key_table = key+rest
    print key_table
    plain_text=''
    counter = 0
    for i in p_text:
         
         plain_text = plain_text+i
         counter += 1
         if counter == 2:
             counter = 0
             plain_text = plain_text+'_'
    plain_text1 = plain_text.split('_')
    #del plain_text1[-1]
    print plain_text1
    
    for i in plain_text1:
        index =0
        while index <= len(i):
            if i[index] == i[index+1]:
                #plain_text1[index] = 
                #m = index
                j = i.split()
                print j
                for k in j:
                    print k
                l = k[0]+'x'+k[1]
                print l
                
                
                break
            else:
                break
    #plain_text1[m] = l
    print plain_text1
    
        
