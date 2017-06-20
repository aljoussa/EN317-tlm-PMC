# EN317-tlm-PMC
Modélisation systemc du PMC de l'ARM SAM3X8E

Les registres PMC sont dans les classes PMC_register
Les connections des sockets sont réaliser dans PMC_module
Chaque socket est décris indépendamment (problème de liasion avec la fonction b_transport)
Un exemple de socket fonctionnel est dans le dossier ex_socket
