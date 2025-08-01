# Sistema de Inventario CLI en C++

## Objetivo

Desarrollar una aplicación de línea de comandos (CLI) en C++ para gestionar el inventario de productos, con arquitectura modular que permita futuras expansiones (por ejemplo, gestión de recordatorios y notas).

---

## 1. Requerimientos Funcionales

### Inventario Básico
- **Alta de producto**: Registrar nuevos productos con información relevante.
- **Consulta de producto**: Búsqueda por nombre, categoría o código.
- **Modificación de producto**: Permitir editar información de productos existentes.
- **Eliminación de producto**: Borrar productos del inventario.
- **Listado de productos**: Mostrar todos los productos registrados.
- **Entrada y salida de stock**: Actualizar cantidades disponibles tras ventas o compras.
- **Persistencia**: Guardar y recuperar la información en archivos (txt/csv/bin).

### Futura Expansión: Recordatorios y Notas
- **Agregar recordatorio**: Asociar tareas/notas a productos o al inventario general (ejemplo: "Revisar el stock de X").
- **Listar recordatorios**: Visualizar tareas pendientes o notas activas.
- **Eliminar/modificar recordatorio**: Gestionar el ciclo de vida de las tareas.

---

## 2. Requerimientos No Funcionales

- **Interfaz**: 100% CLI, menús y opciones navegables vía teclado.
- **Portabilidad**: Compatible con Windows, Linux y macOS.
- **Rendimiento**: Operaciones eficientes con cientos/miles de registros.
- **Escalabilidad**: Diseño modular para facilitar nuevas funciones (recordatorios, historial, usuarios).
- **Seguridad**: Validar entradas para evitar datos corruptos; manejo de excepciones.

---

## 3. Estructura de Datos Sugerida

### Producto
- ID/Código único
- Nombre
- Categoría
- Descripción
- Cantidad en stock
- Precio de compra/venta
- Fecha de ingreso/modificación

### Inventario
- Colección de productos (vector/mapa/lista)

### (Futuro) Recordatorio/Nota
- ID único
- Descripción/título
- Fecha de vencimiento/prioridad
- Estado (pendiente, completado)
- Relación con producto (opcional)

---

## 4. Funcionalidades Avanzadas Opcionales

- **Historial de movimientos**: Registrar entradas/salidas de productos.
- **Filtros y ordenación**: Listar productos según stock, categoría, nombre, etc.
- **Exportación de datos**: Generar reportes en CSV/TXT.
- **Sistema de usuarios**: Implementar autenticación básica (si es necesario).

---

## 5. Detalles Técnicos

- **POO**: Clases para Producto, Inventario, Recordatorio.
- **Templates**: Para operaciones genéricas (búsqueda, filtrado).
- **Excepciones**: Manejo robusto de errores (archivos, entradas inválidas).
- **Vectores/mapas**: Para almacenar y gestionar productos y recordatorios.
- **Punteros**: Para gestión dinámica de objetos si es necesario.
- **Archivos**: Uso de fstream para persistencia de datos.

---

## 6. Proceso de Desarrollo

1. **Fase 1**: Implementar el sistema básico de inventario.
2. **Fase 2**: Refactorizar y modularizar para facilitar la integración de recordatorios/notas.
3. **Fase 3**: Agregar funcionalidad de recordatorios/notas relacionados con productos.
4. **Fase 4**: Pruebas, documentación y preparación para futuras ampliaciones.

---

## 7. Recomendaciones

- Separar la lógica de negocio de la interacción con el usuario.
- Documentar las clases, métodos y funcionalidades.
- Escribir casos de prueba para las funciones principales.

---

## 8. Posibles Expansiones Futuras

- Integración con bases de datos externas.
- Visualización avanzada de reportes.
- Módulo de estadísticas y análisis de inventario.
- Multiusuario y gestión de permisos.

---