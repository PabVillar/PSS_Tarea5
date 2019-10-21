#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

#include "impr.h"

/* indique aca los campos que necesita en una orden de trabajo */
struct orden {
  Doc *doc;
  int listo;
}Orden;/*un recibo*/

/* defina aca las variables globales que necesite y programe las funciones
 * pedidas.
 */

 ColaFifo *cola;

void init_impr(Impr **imprs, int n_impr) {
  ... /* use pthread_create para lanzar n_impr threads consumidores */
}

void terminar_impr() {
  ... /* no olvide invocar pthread_join para enterrar los threads */
}

Orden *imprimir_asinc(Doc *doc) {
  Orden *prec = malloc(sizeof(Rec));
  prec -> doc = doc;
  prec -> listo = FALSE;
  agregar(cola,prec);
  return prec;
}

void confirmar(Orden *ord) {
 while(!prec -> listo)
 	;
 free(prec);
}

/* no olvide programar ademas la funcion que ejecutara cada thread */
