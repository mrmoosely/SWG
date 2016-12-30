/*
 *	autogen/server/zone/objects/creature/ai/DroidObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef DROIDOBJECT_H_
#define DROIDOBJECT_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#ifndef likely
#ifdef __GNUC__
#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)
#else
#define likely(x)       (x)
#define unlikely(x)     (x)
#endif
#endif
namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace components {
namespace droid {

class BaseDroidModuleComponent;

} // namespace droid
} // namespace components
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::components::droid;

#include "server/zone/objects/tangible/tool/CraftingStation.h"

#include "templates/SharedObjectTemplate.h"

#include "server/zone/objects/structure/StructureObject.h"

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/creature/ai/AiAgent.h"

#include "engine/util/u3d/Coordinate.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class DroidObject : public AiAgent {
public:
	/**
	 * Droid's power when recharged
	 */
	static const int MAX_POWER = 1000;

	/**
	 * Maximum paint charges
	 */
	static const int PAINTCHARGES = 999;

	/**
	 * Droid species for Identification
	 */
	static const int ASSASSIN_DROID = 0xCB;

	static const int R_SERIES = 0xCC;

	static const int ROBO_BARTENDER = 0xCD;

	static const int BUG_DROID = 0xCE;

	static const int DARK_TROOPER_II = 0xCF;

	static const int DEMOLITION_MECH = 0xD0;

	static const int TT_8L_Y7 = 0xD1;

	static const int DROIDECA = 0xD2;

	static const int INTERROGATOR = 0xD3;

	static const int JEDI_TRAINING = 0xD4;

	static const int BLL = 0xD5;

	static const int MSE = 0xD6;

	static const int POWER_DROID = 0xD7;

	static const int PROBOT = 0xD8;

	static const int PROTOCOL = 0xD9;

	static const int LE_REPAIR = 0xDA;

	static const int MONK_SPIDER = 0xDB;

	static const int SURGICAL = 0xDC;

	static const int TT_8L = 0xDD;

	static const int DZ70 = 0xDE;

	static const int TREADWELL = 0xDF;

	static const int PROBE_DROID = 0xE1;

	DroidObject();

	void initializeTransientMembers();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Fills the module radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Inserts this object into zone
	 * @pre { this object is locked }
	 * @post { this object is locked and inserted into zone }
	 * @param zone Zone object where this object will be inserted
	 */
	void notifyInsertToZone(Zone* zone);

	bool isDroidObject();

	int getMaximumHAM();

	void setMaximumHAM(int idx);

	void setAttackSpeed(float f);

	bool isCamouflaged(CreatureObject* target);

	bool hasPower();

	/**
	 * Consumes power
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param amount int the amount of power to use
	 */
	void usePower(int amount);

	void runModulePowerDrain();

	/**
	 * Reset paint back to full
	 */
	void refreshPaint();

	/**
	 * Handles the recharge droid radial selection
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @returns 0 if successful, 1 otherwise
	 */
	int rechargeFromBattery(CreatureObject* player);

	/**
	 * Handles droid being recharged by another droid
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param player CreatureObject that selected the option
	 */
	void rechargeFromDroid();

	/**
	 * Instructs droid to recharge another droid
	 * @pre { this object is locked, droid is locked }
	 * @post { this object is locked, droid is locked }
	 * @param droid DroidObject that selected the option
	 */
	void rechargeOtherDroid(DroidObject* otherDroid);

	/**
	 * Called when the droid runs out of power
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 */
	void handleLowPower();

	/**
	 * Whether or not droid is a power droid
	 */
	bool isPowerDroid();

	/**
	 * Initializes droid modules from crafted_components scenos
	 */
	void initDroidModules();

	void initDroidWeapons();

	/**
	 * Returns a crafting station of the given type if droid has the appropriate module. Returns NULL otherwise.
	 */
	CraftingStation* getCraftingStation(int type);

	/**
	 * Returns a reaction stf if the droid has a personality chip
	 */
	String getPersonalityBase();

	BaseDroidModuleComponent* getModule(const String& name);

	void onStore();

	void onCall();

	void loadSkillMods(CreatureObject* player);

	void unloadSkillMods(CreatureObject* player);

	/**
	 * Handles chat messages to the droid and hands it off to the modules
	 * @pre { }
	 * @post { }
	 * @param object player creature speaking
	 * @param string chat message
	 */
	void handleChat(CreatureObject* speaker, const String& message);

	/**
	 * Set armor type (from armor module)
	 */
	void setArmor(unsigned int level);

	/**
	 * Set droid hit chance (form combat module)
	 */
	void setHitChance(float v);

	/**
	 * Set resists (from armor module)
	 */
	void setResists(float res);

	void setMaxDamage(int i);

	void setMinDamage(int i);

	unsigned int getArmor();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	float getChanceHit();

	bool isMerchantBarker();

	String getPersonalityStf();

	bool isAdvancedModel();

	bool isCombatDroid();

	bool isTrapDroid();

	bool hasStorage();

	bool isMaintenanceDroid();

	bool assignStructure(StructureObject* structure);

	bool isStructureAssigned(StructureObject* structure);

	/**
	 * sends the conversation notification 
	 * @pre {this locked, player locked }
	 * @post { this locked, player locked }
	 * @return whether the conversation was started or not
	 */
	bool sendConversationStartTo(SceneObject* player);

	bool hasReactionChatMessages();

	String getReactionStf();

	int getHamMaximum();

	int getHamBase();

	int getDamageMin();

	int getDamageMax();

	float getAttackSpeed();

	float calculateAttackSpeed(int level);

	DistributedObjectServant* _getImplementation();
	DistributedObjectServant* _getImplementationForRead() const;

	void _setImplementation(DistributedObjectServant* servant);

protected:
	DroidObject(DummyConstructorParameter* param);

	virtual ~DroidObject();

	friend class DroidObjectHelper;
};

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace ai {

class DroidObjectImplementation : public AiAgentImplementation {
public:
	/**
	 * Droid's power when recharged
	 */
	static const int MAX_POWER = 1000;

protected:
	/**
	 * Current amount of power
	 */
	int power;

	/**
	 * Current paint decay
	 */
	int paintCount;

public:
	/**
	 * Maximum paint charges
	 */
	static const int PAINTCHARGES = 999;

protected:
	/**
	 * Armor type
	 */
	unsigned int armor;

	/**
	 * Damage resistance (same for all types except lightsaber)
	 */
	float resist;

	/**
	 * List of installed droid modules
	 */
	Vector<BaseDroidModuleComponent*> modules;

	/**
	 * Droid hit chance
	 */
	float hitChance;

public:
	/**
	 * Droid species for Identification
	 */
	static const int ASSASSIN_DROID = 0xCB;

	static const int R_SERIES = 0xCC;

	static const int ROBO_BARTENDER = 0xCD;

	static const int BUG_DROID = 0xCE;

	static const int DARK_TROOPER_II = 0xCF;

	static const int DEMOLITION_MECH = 0xD0;

	static const int TT_8L_Y7 = 0xD1;

	static const int DROIDECA = 0xD2;

	static const int INTERROGATOR = 0xD3;

	static const int JEDI_TRAINING = 0xD4;

	static const int BLL = 0xD5;

	static const int MSE = 0xD6;

	static const int POWER_DROID = 0xD7;

	static const int PROBOT = 0xD8;

	static const int PROTOCOL = 0xD9;

	static const int LE_REPAIR = 0xDA;

	static const int MONK_SPIDER = 0xDB;

	static const int SURGICAL = 0xDC;

	static const int TT_8L = 0xDD;

	static const int DZ70 = 0xDE;

	static const int TREADWELL = 0xDF;

	static const int PROBE_DROID = 0xE1;

protected:
	int maximumHam;

	int minDamage;

	int maxDamage;

	float attackSpeed;

public:
	DroidObjectImplementation();

	DroidObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	/**
	 * Fills the attribute list message options that are sent to player creature
	 * @pre { }
	 * @post { }
	 * @param msg attribute list message with the attributes
	 * @param object player creature to which the message is sent
	 */
	void fillAttributeList(AttributeListMessage* msg, CreatureObject* object);

	/**
	 * Handles the radial selection sent by the client, must be overriden by inherited objects
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @param selectedID selected menu id
	 * @returns 0 if successfull
	 */
	virtual int handleObjectMenuSelect(CreatureObject* player, byte selectedID);

	/**
	 * Fills the module radial options, needs to be overriden
	 * @pre { this object is locked }
	 * @post { this object is locked, menuResponse is complete}
	 * @param menuResponse ObjectMenuResponse that will be sent to the client
	 */
	virtual void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player);

	/**
	 * Inserts this object into zone
	 * @pre { this object is locked }
	 * @post { this object is locked and inserted into zone }
	 * @param zone Zone object where this object will be inserted
	 */
	void notifyInsertToZone(Zone* zone);

	bool isDroidObject();

	int getMaximumHAM();

	void setMaximumHAM(int idx);

	void setAttackSpeed(float f);

	bool isCamouflaged(CreatureObject* target);

	bool hasPower();

	/**
	 * Consumes power
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param amount int the amount of power to use
	 */
	void usePower(int amount);

	void runModulePowerDrain();

	/**
	 * Reset paint back to full
	 */
	void refreshPaint();

	/**
	 * Handles the recharge droid radial selection
	 * @pre { this object is locked, player is locked }
	 * @post { this object is locked, player is locked }
	 * @param player CreatureObject that selected the option
	 * @returns 0 if successful, 1 otherwise
	 */
	int rechargeFromBattery(CreatureObject* player);

	/**
	 * Handles droid being recharged by another droid
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 * @param player CreatureObject that selected the option
	 */
	void rechargeFromDroid();

	/**
	 * Instructs droid to recharge another droid
	 * @pre { this object is locked, droid is locked }
	 * @post { this object is locked, droid is locked }
	 * @param droid DroidObject that selected the option
	 */
	void rechargeOtherDroid(DroidObject* otherDroid);

	/**
	 * Called when the droid runs out of power
	 * @pre { this object is locked }
	 * @post { this object is locked }
	 */
	void handleLowPower();

	/**
	 * Whether or not droid is a power droid
	 */
	bool isPowerDroid();

	/**
	 * Initializes droid modules from crafted_components scenos
	 */
	void initDroidModules();

	void initDroidWeapons();

	/**
	 * Returns a crafting station of the given type if droid has the appropriate module. Returns NULL otherwise.
	 */
	CraftingStation* getCraftingStation(int type);

	/**
	 * Returns a reaction stf if the droid has a personality chip
	 */
	String getPersonalityBase();

	BaseDroidModuleComponent* getModule(const String& name);

	void onStore();

	void onCall();

	void loadSkillMods(CreatureObject* player);

	void unloadSkillMods(CreatureObject* player);

	/**
	 * Handles chat messages to the droid and hands it off to the modules
	 * @pre { }
	 * @post { }
	 * @param object player creature speaking
	 * @param string chat message
	 */
	void handleChat(CreatureObject* speaker, const String& message);

	/**
	 * Set armor type (from armor module)
	 */
	void setArmor(unsigned int level);

	/**
	 * Set droid hit chance (form combat module)
	 */
	void setHitChance(float v);

	/**
	 * Set resists (from armor module)
	 */
	void setResists(float res);

	void setMaxDamage(int i);

	void setMinDamage(int i);

	unsigned int getArmor();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	float getChanceHit();

	bool isMerchantBarker();

	String getPersonalityStf();

	bool isAdvancedModel();

	bool isCombatDroid();

	bool isTrapDroid();

	bool hasStorage();

	bool isMaintenanceDroid();

	bool assignStructure(StructureObject* structure);

	bool isStructureAssigned(StructureObject* structure);

	/**
	 * sends the conversation notification 
	 * @pre {this locked, player locked }
	 * @post { this locked, player locked }
	 * @return whether the conversation was started or not
	 */
	bool sendConversationStartTo(SceneObject* player);

	bool hasReactionChatMessages();

	String getReactionStf();

	int getHamMaximum();

	int getHamBase();

	int getDamageMin();

	int getDamageMax();

	float getAttackSpeed();

	float calculateAttackSpeed(int level);

	WeakReference<DroidObject*> _this;

	operator const DroidObject*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~DroidObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const uint32& nameHashCode);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class DroidObject;
};

class DroidObjectAdapter : public AiAgentAdapter {
public:
	DroidObjectAdapter(DroidObject* impl);

	void invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	bool isDroidObject();

	int getMaximumHAM();

	void setMaximumHAM(int idx);

	void setAttackSpeed(float f);

	bool isCamouflaged(CreatureObject* target);

	bool hasPower();

	void usePower(int amount);

	void runModulePowerDrain();

	void refreshPaint();

	int rechargeFromBattery(CreatureObject* player);

	void rechargeFromDroid();

	void rechargeOtherDroid(DroidObject* otherDroid);

	void handleLowPower();

	bool isPowerDroid();

	float getKinetic();

	float getEnergy();

	float getElectricity();

	float getStun();

	float getBlast();

	float getHeat();

	float getCold();

	float getAcid();

	float getLightSaber();

	float getChanceHit();

	bool isMerchantBarker();

	String getPersonalityStf();

	bool isAdvancedModel();

	bool isCombatDroid();

	bool isTrapDroid();

	bool hasStorage();

	bool isMaintenanceDroid();

	bool sendConversationStartTo(SceneObject* player);

	bool hasReactionChatMessages();

	String getReactionStf();

	int getHamMaximum();

	int getHamBase();

	int getDamageMin();

	int getDamageMax();

	float getAttackSpeed();

	float calculateAttackSpeed(int level);

};

class DroidObjectHelper : public DistributedObjectClassHelper, public Singleton<DroidObjectHelper> {
	static DroidObjectHelper* staticInitializer;

public:
	DroidObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<DroidObjectHelper>;
};

} // namespace ai
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::ai;

#endif /*DROIDOBJECT_H_*/