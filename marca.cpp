#include "marca.h"

Marca::Marca(int _id,QString _nombre, QString _descripcion )
{
    id=_id;
    nombre=_nombre;
    descripcion=_descripcion;
}

Marca::Marca()
{
    id=0;
    nombre="";
    descripcion="";
}

Marca::Marca(QString _nombre, QString _descripcion )
{
    id=0;
    nombre=_nombre;
    descripcion=_descripcion;
}



/*--------------------------------------------------------------------
                FUNCION PARA DEVOLVER OBJETOS EXISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Retorna un Qlist de las Marcas existentes
 * @return QList Marcas
 */
QList<Marca*> Marca::listar()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM marca");
    query.exec();
    QList<Marca*> lista_resultado;
    while(query.next())
    {
        int _id=query.value(0).toInt();
        QString _nombre=query.value(1).toString();
        QString _descripcion=query.value(2).toString();
        Marca* marca=new Marca(_id,_nombre,_descripcion);
        lista_resultado.push_back(marca);
    }
    return lista_resultado;
}







/*--------------------------------------------------------------------
                FUNCIONES GET'S Y SET'S
---------------------------------------------------------------------*/

/**
 * @brief Entrega el id de la Marca
 * @return Int id
 */
int Marca::getId()
{
    return id;
}



/**
 * @brief Entrega el nombre de la Marca
 * @return QString nombre
 */
QString Marca::getNombre()
{
    return nombre;
}



/**
 * @brief Entrega la descripcion de la Marca
 * @return QString descripcion
 */
QString Marca::getdescripcion()
{
    return descripcion;
}



/**
 * @brief Permitar cambiar el dato del id
 * @param Int _id que representa al nuevo id
 */
void Marca::setId(int _id)
{
    id=_id;
}



/**
 * @brief Permite cambiar el nombre de la Marca
 * @param QString _nombre que representa el nuevo nombre
 */
void Marca::setNombre(QString _nombre)
{
    nombre=_nombre;
}



/**
 * @brief Permite cambiar la edscripsion de la Marca
 * @param QSrtring _descripcion, que representa la nueva descripcion
 */
void Marca::setdescripcion(QString _descripcion)
{
    descripcion=_descripcion;
}






/*--------------------------------------------------------------------
                FUNCIONES DEL OBJETO PERSISTENTE
---------------------------------------------------------------------*/

/**
 * @brief Esta funcion ejecuta el agregar una nueva Marca a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Marca::agregar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("INSERT INTO marca (nombre,descripcion) VALUES ('"+nombre+"','"+descripcion+"')");

        if(query.exec()==true)
        {
            query.prepare("SELECT idmarca FROM marca WHERE nombre='"+nombre+"'");
            query.exec();
            id=query.value(0).toInt();
            return true;
        }
        else
            return false;
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el actualizar una Marca a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Marca::actualizar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("UPDATE marca SET nombre='"+nombre+"', descripcion='"+descripcion+"' WHERE idmarca="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}



/**
 * @brief Esta funcion ejecuta el eliminar una Marca a la base de datos
 * @return Bool, el cual pede ser true o false dependiendo si la operacion
 * se concluyo exitosamente.
 */
bool Marca::eliminar()
{
    if(nombre!="")
    {
        QSqlQuery query;
        query.prepare("DELETE FROM marca WHERE idmarca="+ QString::number(id));
        return query.exec();
    }
    else
        return false;
}
