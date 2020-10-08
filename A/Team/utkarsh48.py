n = int(input("No of questions: "))

answered=0 #how many questions will be answered

agreement_on_question=0 #mutual agreement on 1 question at a time

for i in range(n): #gettng n inputs(not stored, processed as provided)
	response = list(map(int,input("").split())) #stdin to array of integers

	for j in range(len(response)): #traversing each input array
		if(response[j]==1):
			agreement_on_question+=1

	if(agreement_on_question>1): #if agreement on the given question was > 1 i.e. >=2
		answered+=1 #increment the no of questions answered by 1

	agreement_on_question=0 #reset agreement to 0 for next question

print(answered) #printing answer on stdout