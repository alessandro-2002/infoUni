import numpy 

array = ["abaco", "abatjour",
"abbaco",
"abbagliante",
"abbassalingua",
"abbecedario",
"abbeveratoio",
"abbronzante",
"abito",
"accappatoio",
"acceleratore",
"accelerometro",
"accendigas",
"accendino",
"accendisigari",
"accendisigaro",
"accetta",
"acchiappafarfalle",
"acchiappamosche"]

print("Oggi Salvini elenca...")

for x in range (10):
	print(" " + str(x) + " - " + str(numpy.random.choice(array)))
