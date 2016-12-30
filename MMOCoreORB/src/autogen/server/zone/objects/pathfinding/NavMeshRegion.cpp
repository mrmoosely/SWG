/*
 *	autogen/server/zone/objects/pathfinding/NavMeshRegion.cpp generated by engine3 IDL compiler 0.60
 */

#include "NavMeshRegion.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	NavMeshRegionStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__,RPC_INITIALIZE__,RPC_NOTIFYENTER__SCENEOBJECT_,RPC_NOTIFYEXIT__SCENEOBJECT_,RPC_NOTIFYLOADFROMDATABASE__,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_DESTROYOBJECTFROMWORLD__BOOL_,RPC_ISREGION__,RPC_ISNAVREGION__,RPC_ASNAVREGION__,RPC_OBJECTINMESH__SCENEOBJECT_,RPC_GETMESHNAME__,RPC_SETMESHNAME__STRING_,RPC_ISINRANGE__FLOAT_FLOAT_FLOAT_,RPC_UPDATENAVMESH__SCENEOBJECT_BOOL_,RPC_CONTAINSPOINT__FLOAT_FLOAT_};

NavMeshRegion::NavMeshRegion() : Region(DummyConstructorParameter::instance()) {
	NavMeshRegionImplementation* _implementation = new NavMeshRegionImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("NavMeshRegion");
}

NavMeshRegion::NavMeshRegion(DummyConstructorParameter* param) : Region(param) {
	_setClassName("NavMeshRegion");
}

NavMeshRegion::~NavMeshRegion() {
}



void NavMeshRegion::initializeNavRegion(Vector3& position, float radius, Zone* zone, String& name, bool buildMesh, bool forceRebuild) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->initializeNavRegion(position, radius, zone, name, buildMesh, forceRebuild);
	}
}

void NavMeshRegion::initializeTransientMembers() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initializeTransientMembers();
	}
}

void NavMeshRegion::initialize() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->initialize();
	}
}

void NavMeshRegion::notifyEnter(SceneObject* object) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyEnter(object);
	}
}

void NavMeshRegion::notifyExit(SceneObject* object) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYEXIT__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyExit(object);
	}
}

void NavMeshRegion::notifyLoadFromDatabase() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYLOADFROMDATABASE__);

		method.executeWithVoidReturn();
	} else {
		_implementation->notifyLoadFromDatabase();
	}
}

void NavMeshRegion::destroyObjectFromDatabase(bool destroyContainedObjects) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else {
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
	}
}

void NavMeshRegion::destroyObjectFromWorld(bool sendSelfDestroy) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMWORLD__BOOL_);
		method.addBooleanParameter(sendSelfDestroy);

		method.executeWithVoidReturn();
	} else {
		_implementation->destroyObjectFromWorld(sendSelfDestroy);
	}
}

const AABB* NavMeshRegion::getMeshBounds() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getMeshBounds();
	}
}

RecastNavMesh* NavMeshRegion::getNavMesh() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getNavMesh();
	}
}

void NavMeshRegion::setNavMesh(RecastNavMesh* mesh) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->setNavMesh(mesh);
	}
}

void NavMeshRegion::disableMeshUpdates(bool disable) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->disableMeshUpdates(disable);
	}
}

bool NavMeshRegion::isRegion() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREGION__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isRegion();
	}
}

bool NavMeshRegion::isNavRegion() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISNAVREGION__);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isNavRegion();
	}
}

NavMeshRegion* NavMeshRegion::asNavRegion() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ASNAVREGION__);

		return static_cast<NavMeshRegion*>(method.executeWithObjectReturn());
	} else {
		return _implementation->asNavRegion();
	}
}

bool NavMeshRegion::objectInMesh(SceneObject* obj) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_OBJECTINMESH__SCENEOBJECT_);
		method.addObjectParameter(obj);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->objectInMesh(obj);
	}
}

String NavMeshRegion::getMeshName() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMESHNAME__);

		String _return_getMeshName;
		method.executeWithAsciiReturn(_return_getMeshName);
		return _return_getMeshName;
	} else {
		return _implementation->getMeshName();
	}
}

void NavMeshRegion::setMeshName(const String& name) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMESHNAME__STRING_);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else {
		_implementation->setMeshName(name);
	}
}

bool NavMeshRegion::isInRange(float x, float y, float range) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINRANGE__FLOAT_FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);
		method.addFloatParameter(range);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->isInRange(x, y, range);
	}
}

void NavMeshRegion::updateNavMesh(const AABB& area) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->updateNavMesh(area);
	}
}

void NavMeshRegion::updateNavMesh(SceneObject* object, bool toRemove) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATENAVMESH__SCENEOBJECT_BOOL_);
		method.addObjectParameter(object);
		method.addBooleanParameter(toRemove);

		method.executeWithVoidReturn();
	} else {
		_implementation->updateNavMesh(object, toRemove);
	}
}

void NavMeshRegion::setRadius(float f) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementation());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		_implementation->setRadius(f);
	}
}

AABB NavMeshRegion::getBoundingBox() {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		throw ObjectNotLocalException(this);

	} else {
		return _implementation->getBoundingBox();
	}
}

bool NavMeshRegion::containsPoint(float x, float y) {
	NavMeshRegionImplementation* _implementation = static_cast<NavMeshRegionImplementation*>(_getImplementationForRead());
	if (unlikely(_implementation == NULL)) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONTAINSPOINT__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithBooleanReturn();
	} else {
		return _implementation->containsPoint(x, y);
	}
}

DistributedObjectServant* NavMeshRegion::_getImplementation() {

	 if (!_updated) _updated = true;
	return _impl;
}

DistributedObjectServant* NavMeshRegion::_getImplementationForRead() const {
	return _impl;
}

void NavMeshRegion::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	NavMeshRegionImplementation
 */

NavMeshRegionImplementation::NavMeshRegionImplementation(DummyConstructorParameter* param) : RegionImplementation(param) {
	_initializeImplementation();
}


NavMeshRegionImplementation::~NavMeshRegionImplementation() {
}


void NavMeshRegionImplementation::finalize() {
}

void NavMeshRegionImplementation::_initializeImplementation() {
	_setClassHelper(NavMeshRegionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void NavMeshRegionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<NavMeshRegion*>(stub);
	RegionImplementation::_setStub(stub);
}

DistributedObjectStub* NavMeshRegionImplementation::_getStub() {
	return _this.get();
}

NavMeshRegionImplementation::operator const NavMeshRegion*() {
	return _this.get();
}

void NavMeshRegionImplementation::lock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->lock(doLock);
}

void NavMeshRegionImplementation::lock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->lock(obj);
}

void NavMeshRegionImplementation::rlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->rlock(doLock);
}

void NavMeshRegionImplementation::wlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->wlock(doLock);
}

void NavMeshRegionImplementation::wlock(ManagedObject* obj) {
	_this.getReferenceUnsafeStaticCast()->wlock(obj);
}

void NavMeshRegionImplementation::unlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->unlock(doLock);
}

void NavMeshRegionImplementation::runlock(bool doLock) {
	_this.getReferenceUnsafeStaticCast()->runlock(doLock);
}

void NavMeshRegionImplementation::_serializationHelperMethod() {
	RegionImplementation::_serializationHelperMethod();

	_setClassName("NavMeshRegion");

}

void NavMeshRegionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		uint32 _nameHashCode;
		TypeInfo<uint32>::parseFromBinaryStream(&_nameHashCode, stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(NavMeshRegionImplementation::readObjectMember(stream, _nameHashCode)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool NavMeshRegionImplementation::readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode) {
	if (RegionImplementation::readObjectMember(stream, nameHashCode))
		return true;

	switch(nameHashCode) {
	case 0xcdc7494a: //NavMeshRegion.meshName
		TypeInfo<String >::parseFromBinaryStream(&meshName, stream);
		return true;

	case 0xc2a14017: //NavMeshRegion.navMesh
		TypeInfo<Reference<RecastNavMesh* > >::parseFromBinaryStream(&navMesh, stream);
		return true;

	case 0x4fa85d99: //NavMeshRegion.disableUpdates
		TypeInfo<bool >::parseFromBinaryStream(&disableUpdates, stream);
		return true;

	case 0xe3c161cd: //NavMeshRegion.containedObjects
		TypeInfo<HashSet<unsigned long long> >::parseFromBinaryStream(&containedObjects, stream);
		return true;

	}

	return false;
}

void NavMeshRegionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = NavMeshRegionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int NavMeshRegionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = RegionImplementation::writeObjectMembers(stream);

	uint32 _nameHashCode;
	int _offset;
	uint32 _totalSize;
	_nameHashCode = 0xcdc7494a; //NavMeshRegion.meshName
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<String >::toBinaryStream(&meshName, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xc2a14017; //NavMeshRegion.navMesh
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<Reference<RecastNavMesh* > >::toBinaryStream(&navMesh, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0x4fa85d99; //NavMeshRegion.disableUpdates
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<bool >::toBinaryStream(&disableUpdates, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);

	_nameHashCode = 0xe3c161cd; //NavMeshRegion.containedObjects
	TypeInfo<uint32>::toBinaryStream(&_nameHashCode, stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<HashSet<unsigned long long> >::toBinaryStream(&containedObjects, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 4;
}

NavMeshRegionImplementation::NavMeshRegionImplementation() : RegionImplementation() {
	_initializeImplementation();
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		disableUpdates = false;
	disableUpdates = false;
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		navMesh = null;
	navMesh = NULL;
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		meshName = "navmesh";
	meshName = "navmesh";
}

const AABB* NavMeshRegionImplementation::getMeshBounds() {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		return meshBounds;
	return (&meshBounds);
}

RecastNavMesh* NavMeshRegionImplementation::getNavMesh() {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		return navMesh;
	return navMesh;
}

void NavMeshRegionImplementation::setNavMesh(RecastNavMesh* mesh) {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		navMesh = mesh;
	navMesh = mesh;
}

void NavMeshRegionImplementation::disableMeshUpdates(bool disable) {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		disableUpdates = disable;
	disableUpdates = disable;
}

bool NavMeshRegionImplementation::isRegion() {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		return true;
	return true;
}

bool NavMeshRegionImplementation::isNavRegion() {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		return true;
	return true;
}

bool NavMeshRegionImplementation::objectInMesh(SceneObject* obj) {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		return containedObjects.contains(obj.getObjectID());
	return (&containedObjects)->contains(obj->getObjectID());
}

String NavMeshRegionImplementation::getMeshName() {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		return meshName;
	return meshName;
}

void NavMeshRegionImplementation::setMeshName(const String& name) {
	// server/zone/objects/pathfinding/NavMeshRegion.idl():  		meshName = name;
	meshName = name;
}

/*
 *	NavMeshRegionAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


NavMeshRegionAdapter::NavMeshRegionAdapter(NavMeshRegion* obj) : RegionAdapter(obj) {
}

void NavMeshRegionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		{
			
			initializeTransientMembers();
			
		}
		break;
	case RPC_INITIALIZE__:
		{
			
			initialize();
			
		}
		break;
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		{
			SceneObject* object = static_cast<SceneObject*>(inv->getObjectParameter());
			
			notifyEnter(object);
			
		}
		break;
	case RPC_NOTIFYEXIT__SCENEOBJECT_:
		{
			SceneObject* object = static_cast<SceneObject*>(inv->getObjectParameter());
			
			notifyExit(object);
			
		}
		break;
	case RPC_NOTIFYLOADFROMDATABASE__:
		{
			
			notifyLoadFromDatabase();
			
		}
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		{
			bool destroyContainedObjects = inv->getBooleanParameter();
			
			destroyObjectFromDatabase(destroyContainedObjects);
			
		}
		break;
	case RPC_DESTROYOBJECTFROMWORLD__BOOL_:
		{
			bool sendSelfDestroy = inv->getBooleanParameter();
			
			destroyObjectFromWorld(sendSelfDestroy);
			
		}
		break;
	case RPC_ISREGION__:
		{
			
			bool _m_res = isRegion();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ISNAVREGION__:
		{
			
			bool _m_res = isNavRegion();
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_ASNAVREGION__:
		{
			
			DistributedObject* _m_res = asNavRegion();
			resp->insertLong(_m_res == NULL ? 0 : _m_res->_getObjectID());
		}
		break;
	case RPC_OBJECTINMESH__SCENEOBJECT_:
		{
			SceneObject* obj = static_cast<SceneObject*>(inv->getObjectParameter());
			
			bool _m_res = objectInMesh(obj);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_GETMESHNAME__:
		{
			
			String _m_res = getMeshName();
			resp->insertAscii(_m_res);
		}
		break;
	case RPC_SETMESHNAME__STRING_:
		{
			 String name; inv->getAsciiParameter(name);
			
			setMeshName(name);
			
		}
		break;
	case RPC_ISINRANGE__FLOAT_FLOAT_FLOAT_:
		{
			float x = inv->getFloatParameter();
			float y = inv->getFloatParameter();
			float range = inv->getFloatParameter();
			
			bool _m_res = isInRange(x, y, range);
			resp->insertBoolean(_m_res);
		}
		break;
	case RPC_UPDATENAVMESH__SCENEOBJECT_BOOL_:
		{
			SceneObject* object = static_cast<SceneObject*>(inv->getObjectParameter());
			bool toRemove = inv->getBooleanParameter();
			
			updateNavMesh(object, toRemove);
			
		}
		break;
	case RPC_CONTAINSPOINT__FLOAT_FLOAT_:
		{
			float x = inv->getFloatParameter();
			float y = inv->getFloatParameter();
			
			bool _m_res = containsPoint(x, y);
			resp->insertBoolean(_m_res);
		}
		break;
	default:
		RegionAdapter::invokeMethod(methid, inv);
	}
}

void NavMeshRegionAdapter::initializeTransientMembers() {
	(static_cast<NavMeshRegion*>(stub))->initializeTransientMembers();
}

void NavMeshRegionAdapter::initialize() {
	(static_cast<NavMeshRegion*>(stub))->initialize();
}

void NavMeshRegionAdapter::notifyEnter(SceneObject* object) {
	(static_cast<NavMeshRegion*>(stub))->notifyEnter(object);
}

void NavMeshRegionAdapter::notifyExit(SceneObject* object) {
	(static_cast<NavMeshRegion*>(stub))->notifyExit(object);
}

void NavMeshRegionAdapter::notifyLoadFromDatabase() {
	(static_cast<NavMeshRegion*>(stub))->notifyLoadFromDatabase();
}

void NavMeshRegionAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	(static_cast<NavMeshRegion*>(stub))->destroyObjectFromDatabase(destroyContainedObjects);
}

void NavMeshRegionAdapter::destroyObjectFromWorld(bool sendSelfDestroy) {
	(static_cast<NavMeshRegion*>(stub))->destroyObjectFromWorld(sendSelfDestroy);
}

bool NavMeshRegionAdapter::isRegion() {
	return (static_cast<NavMeshRegion*>(stub))->isRegion();
}

bool NavMeshRegionAdapter::isNavRegion() {
	return (static_cast<NavMeshRegion*>(stub))->isNavRegion();
}

NavMeshRegion* NavMeshRegionAdapter::asNavRegion() {
	return (static_cast<NavMeshRegion*>(stub))->asNavRegion();
}

bool NavMeshRegionAdapter::objectInMesh(SceneObject* obj) {
	return (static_cast<NavMeshRegion*>(stub))->objectInMesh(obj);
}

String NavMeshRegionAdapter::getMeshName() {
	return (static_cast<NavMeshRegion*>(stub))->getMeshName();
}

void NavMeshRegionAdapter::setMeshName(const String& name) {
	(static_cast<NavMeshRegion*>(stub))->setMeshName(name);
}

bool NavMeshRegionAdapter::isInRange(float x, float y, float range) {
	return (static_cast<NavMeshRegion*>(stub))->isInRange(x, y, range);
}

void NavMeshRegionAdapter::updateNavMesh(SceneObject* object, bool toRemove) {
	(static_cast<NavMeshRegion*>(stub))->updateNavMesh(object, toRemove);
}

bool NavMeshRegionAdapter::containsPoint(float x, float y) {
	return (static_cast<NavMeshRegion*>(stub))->containsPoint(x, y);
}

/*
 *	NavMeshRegionHelper
 */

NavMeshRegionHelper* NavMeshRegionHelper::staticInitializer = NavMeshRegionHelper::instance();

NavMeshRegionHelper::NavMeshRegionHelper() {
	className = "NavMeshRegion";

	Core::getObjectBroker()->registerClass(className, this);
}

void NavMeshRegionHelper::finalizeHelper() {
	NavMeshRegionHelper::finalize();
}

DistributedObject* NavMeshRegionHelper::instantiateObject() {
	return new NavMeshRegion(DummyConstructorParameter::instance());
}

DistributedObjectServant* NavMeshRegionHelper::instantiateServant() {
	return new NavMeshRegionImplementation();
}

DistributedObjectAdapter* NavMeshRegionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new NavMeshRegionAdapter(static_cast<NavMeshRegion*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}
