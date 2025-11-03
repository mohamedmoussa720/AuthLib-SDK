#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AuthLibAuthManager, AuthLibKotlinUnit, AuthLibApiResponse<T>, AuthLibPaginatedUsers, AuthLibUser, AuthLibAuthDatabaseCompanion, AuthLibUser_, AuthLibRuntimeQuery<__covariant RowType>, AuthLibResponseStatus, AuthLibKotlinEnumCompanion, AuthLibKotlinEnum<E>, AuthLibKotlinArray<T>, AuthLibAuthLibrary, AuthLibDatabaseDriverFactory, AuthLibKotlinThrowable, AuthLibKotlinException, AuthLibKotlinRuntimeException, AuthLibKotlinIllegalStateException, AuthLibRuntimeTransacterTransaction, AuthLibKotlinByteArray, AuthLibKotlinByteIterator;

@protocol AuthLibAuthDatabase, AuthLibRuntimeSqlDriver, AuthLibAuthDatabaseQueries, AuthLibRuntimeTransactionWithoutReturn, AuthLibRuntimeTransactionWithReturn, AuthLibRuntimeTransacter, AuthLibRuntimeSqlDriverSchema, AuthLibKotlinComparable, AuthLibRuntimeSqlPreparedStatement, AuthLibRuntimeSqlCursor, AuthLibRuntimeCloseable, AuthLibRuntimeTransactionCallbacks, AuthLibRuntimeQueryListener, AuthLibKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface AuthLibBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface AuthLibBase (AuthLibBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface AuthLibMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface AuthLibMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorAuthLibKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface AuthLibNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface AuthLibByte : AuthLibNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface AuthLibUByte : AuthLibNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface AuthLibShort : AuthLibNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface AuthLibUShort : AuthLibNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface AuthLibInt : AuthLibNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface AuthLibUInt : AuthLibNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface AuthLibLong : AuthLibNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface AuthLibULong : AuthLibNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface AuthLibFloat : AuthLibNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface AuthLibDouble : AuthLibNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface AuthLibBoolean : AuthLibNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthLibrary")))
@interface AuthLibAuthLibrary : AuthLibBase
- (instancetype)initWithAuthManager:(AuthLibAuthManager *)authManager __attribute__((swift_name("init(authManager:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserUserId:(int64_t)userId completionHandler:(void (^)(AuthLibApiResponse<AuthLibKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersPage:(int32_t)page pageSize:(int32_t)pageSize completionHandler:(void (^)(AuthLibApiResponse<AuthLibPaginatedUsers *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveUserUsername:(NSString *)username password:(NSString *)password completionHandler:(void (^)(AuthLibApiResponse<AuthLibUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveUser(username:password:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthManager")))
@interface AuthLibAuthManager : AuthLibBase
- (instancetype)initWithDatabase:(id<AuthLibAuthDatabase>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserUserId:(int64_t)userId completionHandler:(void (^)(AuthLibApiResponse<AuthLibKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUsersPage:(int32_t)page pageSize:(int32_t)pageSize completionHandler:(void (^)(AuthLibApiResponse<AuthLibPaginatedUsers *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUsers(page:pageSize:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveUserUsername:(NSString *)username password:(NSString *)password completionHandler:(void (^)(AuthLibApiResponse<AuthLibUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveUser(username:password:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface AuthLibDatabaseDriverFactory : AuthLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<AuthLibRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol AuthLibRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<AuthLibRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<AuthLibRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("AuthDatabase")))
@protocol AuthLibAuthDatabase <AuthLibRuntimeTransacter>
@required
@property (readonly) id<AuthLibAuthDatabaseQueries> authDatabaseQueries __attribute__((swift_name("authDatabaseQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthDatabaseCompanion")))
@interface AuthLibAuthDatabaseCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibAuthDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthLibAuthDatabase>)invokeDriver:(id<AuthLibRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<AuthLibRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((swift_name("AuthDatabaseQueries")))
@protocol AuthLibAuthDatabaseQueries <AuthLibRuntimeTransacter>
@required
- (void)deleteUserId:(int64_t)id __attribute__((swift_name("deleteUser(id:)")));
- (AuthLibRuntimeQuery<AuthLibUser_ *> *)getAllUsersValue:(int64_t)value value_:(int64_t)value_ __attribute__((swift_name("getAllUsers(value:value_:)")));
- (AuthLibRuntimeQuery<id> *)getAllUsersValue:(int64_t)value value_:(int64_t)value_ mapper:(id (^)(AuthLibLong *, NSString *, NSString *, AuthLibLong *))mapper __attribute__((swift_name("getAllUsers(value:value_:mapper:)")));
- (AuthLibRuntimeQuery<AuthLibUser_ *> *)getUserByIdId:(int64_t)id __attribute__((swift_name("getUserById(id:)")));
- (AuthLibRuntimeQuery<id> *)getUserByIdId:(int64_t)id mapper:(id (^)(AuthLibLong *, NSString *, NSString *, AuthLibLong *))mapper __attribute__((swift_name("getUserById(id:mapper:)")));
- (AuthLibRuntimeQuery<AuthLibLong *> *)getUsersCount __attribute__((swift_name("getUsersCount()")));
- (void)insertUserUsername:(NSString *)username password:(NSString *)password created_at:(int64_t)created_at __attribute__((swift_name("insertUser(username:password:created_at:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_")))
@interface AuthLibUser_ : AuthLibBase
- (instancetype)initWithId:(int64_t)id username:(NSString *)username password:(NSString *)password created_at:(int64_t)created_at __attribute__((swift_name("init(id:username:password:created_at:)"))) __attribute__((objc_designated_initializer));
- (AuthLibUser_ *)doCopyId:(int64_t)id username:(NSString *)username password:(NSString *)password created_at:(int64_t)created_at __attribute__((swift_name("doCopy(id:username:password:created_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponse")))
@interface AuthLibApiResponse<T> : AuthLibBase
- (instancetype)initWithStatus:(AuthLibResponseStatus *)status error:(NSString * _Nullable)error data:(T _Nullable)data __attribute__((swift_name("init(status:error:data:)"))) __attribute__((objc_designated_initializer));
- (AuthLibApiResponse<T> *)doCopyStatus:(AuthLibResponseStatus *)status error:(NSString * _Nullable)error data:(T _Nullable)data __attribute__((swift_name("doCopy(status:error:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) AuthLibResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedUsers")))
@interface AuthLibPaginatedUsers : AuthLibBase
- (instancetype)initWithUsers:(NSArray<AuthLibUser *> *)users currentPage:(int32_t)currentPage pageSize:(int32_t)pageSize totalCount:(int64_t)totalCount totalPages:(int32_t)totalPages __attribute__((swift_name("init(users:currentPage:pageSize:totalCount:totalPages:)"))) __attribute__((objc_designated_initializer));
- (AuthLibPaginatedUsers *)doCopyUsers:(NSArray<AuthLibUser *> *)users currentPage:(int32_t)currentPage pageSize:(int32_t)pageSize totalCount:(int64_t)totalCount totalPages:(int32_t)totalPages __attribute__((swift_name("doCopy(users:currentPage:pageSize:totalCount:totalPages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentPage __attribute__((swift_name("currentPage")));
@property (readonly) int32_t pageSize __attribute__((swift_name("pageSize")));
@property (readonly) int64_t totalCount __attribute__((swift_name("totalCount")));
@property (readonly) int32_t totalPages __attribute__((swift_name("totalPages")));
@property (readonly) NSArray<AuthLibUser *> *users __attribute__((swift_name("users")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol AuthLibKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface AuthLibKotlinEnum<E> : AuthLibBase <AuthLibKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseStatus")))
@interface AuthLibResponseStatus : AuthLibKotlinEnum<AuthLibResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AuthLibResponseStatus *success __attribute__((swift_name("success")));
@property (class, readonly) AuthLibResponseStatus *error __attribute__((swift_name("error")));
+ (AuthLibKotlinArray<AuthLibResponseStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AuthLibResponseStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface AuthLibUser : AuthLibBase
- (instancetype)initWithId:(int64_t)id username:(NSString *)username password:(NSString *)password createdAt:(int64_t)createdAt __attribute__((swift_name("init(id:username:password:createdAt:)"))) __attribute__((objc_designated_initializer));
- (AuthLibUser *)doCopyId:(int64_t)id username:(NSString *)username password:(NSString *)password createdAt:(int64_t)createdAt __attribute__((swift_name("doCopy(id:username:password:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthLibraryKt")))
@interface AuthLibAuthLibraryKt : AuthLibBase
+ (AuthLibAuthLibrary *)createAuthLibraryDatabaseFactory:(AuthLibDatabaseDriverFactory *)databaseFactory __attribute__((swift_name("createAuthLibrary(databaseFactory:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseFactoryKt")))
@interface AuthLibDatabaseFactoryKt : AuthLibBase
+ (id<AuthLibAuthDatabase>)createDatabaseDriverFactory:(AuthLibDatabaseDriverFactory *)driverFactory __attribute__((swift_name("createDatabase(driverFactory:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSAuthFactoryKt")))
@interface AuthLibIOSAuthFactoryKt : AuthLibBase
+ (AuthLibAuthLibrary *)createIOSAuthLibrary __attribute__((swift_name("createIOSAuthLibrary()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface AuthLibKotlinThrowable : AuthLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (AuthLibKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) AuthLibKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface AuthLibKotlinException : AuthLibKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface AuthLibKotlinRuntimeException : AuthLibKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface AuthLibKotlinIllegalStateException : AuthLibKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface AuthLibKotlinCancellationException : AuthLibKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface AuthLibKotlinUnit : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol AuthLibRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol AuthLibRuntimeSqlDriver <AuthLibRuntimeCloseable>
@required
- (AuthLibRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(AuthLibInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AuthLibRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<AuthLibRuntimeSqlCursor>)executeQueryIdentifier:(AuthLibInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<AuthLibRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (AuthLibRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol AuthLibRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol AuthLibRuntimeTransactionWithoutReturn <AuthLibRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<AuthLibRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol AuthLibRuntimeTransactionWithReturn <AuthLibRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<AuthLibRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol AuthLibRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<AuthLibRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<AuthLibRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface AuthLibRuntimeQuery<__covariant RowType> : AuthLibBase
- (instancetype)initWithQueries:(NSMutableArray<AuthLibRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<AuthLibRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<AuthLibRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<AuthLibRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<AuthLibRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<AuthLibRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface AuthLibKotlinEnumCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface AuthLibKotlinArray<T> : AuthLibBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(AuthLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<AuthLibKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface AuthLibRuntimeTransacterTransaction : AuthLibBase <AuthLibRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) AuthLibRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol AuthLibRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(AuthLibKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(AuthLibDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(AuthLibLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol AuthLibRuntimeSqlCursor <AuthLibRuntimeCloseable>
@required
- (AuthLibKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (AuthLibDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (AuthLibLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol AuthLibRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol AuthLibKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface AuthLibKotlinByteArray : AuthLibBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(AuthLibByte *(^)(AuthLibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (AuthLibKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface AuthLibKotlinByteIterator : AuthLibBase <AuthLibKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AuthLibByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
