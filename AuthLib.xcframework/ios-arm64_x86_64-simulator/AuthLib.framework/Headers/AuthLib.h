#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class AuthLibAuthManager, AuthLibKotlinUnit, AuthLibApiResponse<T>, AuthLibPaginatedUsers, AuthLibUser, AuthLibEmptyServerResponseCompanion, AuthLibEmptyServerResponse, AuthLibAuthLibrary, AuthLibLogger, AuthLibLoginRequestCompanion, AuthLibLoginRequest, AuthLibUserDTO, AuthLibUsersListServerResponseCompanion, AuthLibUsersListServerResponse, AuthLibAuthDatabaseCompanion, AuthLibUser_, AuthLibRuntimeQuery<__covariant RowType>, AuthLibResponseStatus, AuthLibPaginatedUsersCompanion, AuthLibKotlinEnumCompanion, AuthLibKotlinEnum<E>, AuthLibKotlinArray<T>, AuthLibUserCompanion, AuthLibUserDTOCompanion, AuthLibDatabaseDriverFactory, AuthLibServerEngine, AuthLibKtor_server_coreApplication, AuthLibKotlinThrowable, AuthLibKotlinException, AuthLibKotlinRuntimeException, AuthLibKotlinIllegalStateException, AuthLibRuntimeTransacterTransaction, AuthLibKtor_utilsPipelinePhase, AuthLibKtor_utilsPipeline<TSubject, TContext>, AuthLibKtor_server_coreApplicationCallPipelineApplicationPhase, AuthLibKtor_server_coreApplicationReceivePipeline, AuthLibKtor_server_coreApplicationSendPipeline, AuthLibKtor_server_coreApplicationCallPipeline, AuthLibKotlinByteArray, AuthLibKotlinx_serialization_coreSerializersModule, AuthLibKotlinx_serialization_coreSerialKind, AuthLibKotlinNothing, AuthLibKtor_server_host_commonConnectorType, AuthLibKtor_eventsEvents, AuthLibKtor_utilsAttributeKey<T>, AuthLibKtor_server_coreApplicationReceivePipelinePhases, AuthLibKtor_server_coreApplicationSendPipelinePhases, AuthLibKotlinByteIterator, AuthLibKtor_server_host_commonConnectorTypeCompanion, AuthLibKtor_utilsLogLevel, AuthLibKtor_eventsEventDefinition<T>, AuthLibKtor_server_coreRequestCookies, AuthLibKtor_httpHttpStatusCode, AuthLibKtor_server_coreResponseCookies, AuthLibKtor_server_coreResponseHeaders, AuthLibKtor_ioMemory, AuthLibKtor_ioChunkBuffer, AuthLibKtor_ioBuffer, AuthLibKtor_ioByteReadPacket, AuthLibKtor_httpCookieEncoding, AuthLibKtor_httpHttpMethod, AuthLibKtor_httpHeadersBuilder, AuthLibKtor_httpURLBuilder, AuthLibKtor_httpHttpStatusCodeCompanion, AuthLibKtor_httpCookie, AuthLibKtor_utilsGMTDate, AuthLibKtor_ioMemoryCompanion, AuthLibKtor_ioBufferCompanion, AuthLibKtor_ioChunkBufferCompanion, AuthLibKtor_ioInputCompanion, AuthLibKtor_ioInput, AuthLibKtor_ioByteReadPacketCompanion, AuthLibKtor_httpHttpMethodCompanion, AuthLibKtor_utilsStringValuesBuilderImpl, AuthLibKtor_httpURLProtocol, AuthLibKtor_httpURLBuilderCompanion, AuthLibKtor_httpUrl, AuthLibKtor_httpVersionCheckResult, AuthLibKtor_utilsGMTDateCompanion, AuthLibKtor_utilsWeekDay, AuthLibKtor_utilsMonth, AuthLibKtor_httpURLProtocolCompanion, AuthLibKtor_httpUrlCompanion, AuthLibKtor_utilsWeekDayCompanion, AuthLibKtor_utilsMonthCompanion;

@protocol AuthLibAuthDatabase, AuthLibRuntimeSqlDriver, AuthLibKotlinx_serialization_coreKSerializer, AuthLibKtor_server_host_commonApplicationEngine, AuthLibAuthDatabaseQueries, AuthLibRuntimeTransactionWithoutReturn, AuthLibRuntimeTransactionWithReturn, AuthLibRuntimeTransacter, AuthLibRuntimeSqlDriverSchema, AuthLibKotlinComparable, AuthLibRuntimeSqlPreparedStatement, AuthLibRuntimeSqlCursor, AuthLibRuntimeCloseable, AuthLibKotlinx_serialization_coreEncoder, AuthLibKotlinx_serialization_coreSerialDescriptor, AuthLibKotlinx_serialization_coreSerializationStrategy, AuthLibKotlinx_serialization_coreDecoder, AuthLibKotlinx_serialization_coreDeserializationStrategy, AuthLibKtor_server_host_commonEngineConnectorConfig, AuthLibKtor_server_host_commonApplicationEngineEnvironment, AuthLibRuntimeTransactionCallbacks, AuthLibRuntimeQueryListener, AuthLibKotlinIterator, AuthLibKotlinSuspendFunction2, AuthLibKtor_utilsAttributes, AuthLibKtor_server_coreApplicationEnvironment, AuthLibKtor_server_coreApplicationCall, AuthLibKotlinCoroutineContext, AuthLibKotlinx_coroutines_coreCoroutineScope, AuthLibKotlinx_serialization_coreCompositeEncoder, AuthLibKotlinAnnotation, AuthLibKotlinx_serialization_coreCompositeDecoder, AuthLibKtor_server_coreApplicationConfig, AuthLibKtor_utilsLogger, AuthLibKotlinFunction, AuthLibKtor_httpParameters, AuthLibKtor_server_coreApplicationRequest, AuthLibKtor_server_coreApplicationResponse, AuthLibKotlinCoroutineContextElement, AuthLibKotlinCoroutineContextKey, AuthLibKotlinx_serialization_coreSerializersModuleCollector, AuthLibKotlinKClass, AuthLibKtor_server_coreApplicationConfigValue, AuthLibKotlinx_coroutines_coreDisposableHandle, AuthLibKotlinMapEntry, AuthLibKtor_utilsStringValues, AuthLibKtor_ioByteReadChannel, AuthLibKtor_httpHeaders, AuthLibKtor_httpRequestConnectionPoint, AuthLibKtor_server_coreResponsePushBuilder, AuthLibKotlinKDeclarationContainer, AuthLibKotlinKAnnotatedElement, AuthLibKotlinKClassifier, AuthLibKtor_ioReadSession, AuthLibKotlinSuspendFunction1, AuthLibKotlinAppendable, AuthLibKtor_httpVersion, AuthLibKtor_ioObjectPool, AuthLibKtor_ioCloseable, AuthLibKtor_utilsStringValuesBuilder, AuthLibKtor_httpParametersBuilder;

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
- (BOOL)isServerRunning __attribute__((swift_name("isServerRunning()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveUserUsername:(NSString *)username password:(NSString *)password completionHandler:(void (^)(AuthLibApiResponse<AuthLibUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveUser(username:password:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startServerHost:(NSString *)host port:(int32_t)port completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("startServer(host:port:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopServerWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopServer(completionHandler:)")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyServerResponse")))
@interface AuthLibEmptyServerResponse : AuthLibBase
- (instancetype)initWithStatus:(BOOL)status data:(NSString * _Nullable)data error:(NSString * _Nullable)error __attribute__((swift_name("init(status:data:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibEmptyServerResponseCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibEmptyServerResponse *)doCopyStatus:(BOOL)status data:(NSString * _Nullable)data error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(status:data:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyServerResponse.Companion")))
@interface AuthLibEmptyServerResponseCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibEmptyServerResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpServer")))
@interface AuthLibHttpServer : AuthLibBase
- (instancetype)initWithAuthLibrary:(AuthLibAuthLibrary *)authLibrary __attribute__((swift_name("init(authLibrary:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isRunning __attribute__((swift_name("isRunning()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startHost:(NSString *)host port:(int32_t)port completionHandler:(void (^)(AuthLibBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("start(host:port:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface AuthLibLogger : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibLogger *shared __attribute__((swift_name("shared")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest")))
@interface AuthLibLoginRequest : AuthLibBase
- (instancetype)initWithUsername:(NSString *)username password:(NSString *)password __attribute__((swift_name("init(username:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibLoginRequest *)doCopyUsername:(NSString *)username password:(NSString *)password __attribute__((swift_name("doCopy(username:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest.Companion")))
@interface AuthLibLoginRequestCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerEngine")))
@interface AuthLibServerEngine : AuthLibBase
- (instancetype)initWithEngine:(id<AuthLibKtor_server_host_commonApplicationEngine>)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UsersListServerResponse")))
@interface AuthLibUsersListServerResponse : AuthLibBase
- (instancetype)initWithStatus:(BOOL)status data:(NSArray<AuthLibUserDTO *> * _Nullable)data error:(NSString * _Nullable)error __attribute__((swift_name("init(status:data:error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibUsersListServerResponseCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibUsersListServerResponse *)doCopyStatus:(BOOL)status data:(NSArray<AuthLibUserDTO *> * _Nullable)data error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(status:data:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<AuthLibUserDTO *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UsersListServerResponse.Companion")))
@interface AuthLibUsersListServerResponseCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibUsersListServerResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedUsers")))
@interface AuthLibPaginatedUsers : AuthLibBase
- (instancetype)initWithUsers:(NSArray<AuthLibUser *> *)users currentPage:(int32_t)currentPage pageSize:(int32_t)pageSize totalCount:(int64_t)totalCount totalPages:(int32_t)totalPages __attribute__((swift_name("init(users:currentPage:pageSize:totalCount:totalPages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibPaginatedUsersCompanion *companion __attribute__((swift_name("companion")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaginatedUsers.Companion")))
@interface AuthLibPaginatedUsersCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibPaginatedUsersCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface AuthLibUser : AuthLibBase
- (instancetype)initWithId:(int64_t)id username:(NSString *)username password:(NSString *)password createdAt:(int64_t)createdAt __attribute__((swift_name("init(id:username:password:createdAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibUserCompanion *companion __attribute__((swift_name("companion")));
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
__attribute__((swift_name("User.Companion")))
@interface AuthLibUserCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibUserCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDTO")))
@interface AuthLibUserDTO : AuthLibBase
- (instancetype)initWithId:(int64_t)id username:(NSString *)username createdAt:(int64_t)createdAt __attribute__((swift_name("init(id:username:createdAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibUserDTOCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibUserDTO *)doCopyId:(int64_t)id username:(NSString *)username createdAt:(int64_t)createdAt __attribute__((swift_name("doCopy(id:username:createdAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDTO.Companion")))
@interface AuthLibUserDTOCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibUserDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<AuthLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
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
__attribute__((swift_name("HttpServer_iosKt")))
@interface AuthLibHttpServer_iosKt : AuthLibBase
+ (AuthLibServerEngine *)createServerEngineHost:(NSString *)host port:(int32_t)port module:(void (^)(AuthLibKtor_server_coreApplication *))module __attribute__((swift_name("createServerEngine(host:port:module:)")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol AuthLibKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<AuthLibKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<AuthLibKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol AuthLibKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<AuthLibKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<AuthLibKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol AuthLibKotlinx_serialization_coreKSerializer <AuthLibKotlinx_serialization_coreSerializationStrategy, AuthLibKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Ktor_server_host_commonApplicationEngine")))
@protocol AuthLibKtor_server_host_commonApplicationEngine
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolvedConnectorsWithCompletionHandler:(void (^)(NSArray<id<AuthLibKtor_server_host_commonEngineConnectorConfig>> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resolvedConnectors(completionHandler:)")));
- (id<AuthLibKtor_server_host_commonApplicationEngine>)startWait:(BOOL)wait __attribute__((swift_name("start(wait:)")));
- (void)stopGracePeriodMillis:(int64_t)gracePeriodMillis timeoutMillis:(int64_t)timeoutMillis __attribute__((swift_name("stop(gracePeriodMillis:timeoutMillis:)")));
@property (readonly) AuthLibKtor_server_coreApplication *application __attribute__((swift_name("application")));
@property (readonly) id<AuthLibKtor_server_host_commonApplicationEngineEnvironment> environment __attribute__((swift_name("environment")));
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

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface AuthLibKtor_utilsPipeline<TSubject, TContext> : AuthLibBase
- (instancetype)initWithPhases:(AuthLibKotlinArray<AuthLibKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(AuthLibKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AuthLibKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(AuthLibKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(AuthLibKtor_utilsPipelinePhase *)reference phase:(AuthLibKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(AuthLibKtor_utilsPipelinePhase *)reference phase:(AuthLibKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(AuthLibKtor_utilsPipelinePhase *)phase block:(id<AuthLibKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<AuthLibKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(AuthLibKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(AuthLibKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(AuthLibKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(AuthLibKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<AuthLibKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<AuthLibKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationCallPipeline")))
@interface AuthLibKtor_server_coreApplicationCallPipeline : AuthLibKtor_utilsPipeline<AuthLibKotlinUnit *, id<AuthLibKtor_server_coreApplicationCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode environment:(id<AuthLibKtor_server_coreApplicationEnvironment> _Nullable)environment __attribute__((swift_name("init(developmentMode:environment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AuthLibKotlinArray<AuthLibKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AuthLibKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AuthLibKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AuthLibKtor_server_coreApplicationCallPipelineApplicationPhase *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) id<AuthLibKtor_server_coreApplicationEnvironment> _Nullable environment __attribute__((swift_name("environment")));
@property (readonly) AuthLibKtor_server_coreApplicationReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) AuthLibKtor_server_coreApplicationSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol AuthLibKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<AuthLibKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplication")))
@interface AuthLibKtor_server_coreApplication : AuthLibKtor_server_coreApplicationCallPipeline <AuthLibKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithEnvironment:(id<AuthLibKtor_server_coreApplicationEnvironment>)environment __attribute__((swift_name("init(environment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode environment:(id<AuthLibKtor_server_coreApplicationEnvironment> _Nullable)environment __attribute__((swift_name("init(developmentMode:environment:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispose __attribute__((swift_name("dispose()")));
@property (readonly) id<AuthLibKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<AuthLibKtor_server_coreApplicationEnvironment> environment __attribute__((swift_name("environment")));
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

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol AuthLibKotlinx_serialization_coreEncoder
@required
- (id<AuthLibKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<AuthLibKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<AuthLibKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<AuthLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<AuthLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) AuthLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol AuthLibKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<AuthLibKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AuthLibKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<AuthLibKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) AuthLibKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol AuthLibKotlinx_serialization_coreDecoder
@required
- (id<AuthLibKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<AuthLibKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (AuthLibKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<AuthLibKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<AuthLibKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) AuthLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Ktor_server_host_commonEngineConnectorConfig")))
@protocol AuthLibKtor_server_host_commonEngineConnectorConfig
@required
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) AuthLibKtor_server_host_commonConnectorType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationEnvironment")))
@protocol AuthLibKtor_server_coreApplicationEnvironment
@required
@property (readonly) id<AuthLibKtor_server_coreApplicationConfig> config __attribute__((swift_name("config")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) id<AuthLibKtor_utilsLogger> log __attribute__((swift_name("log")));
@property (readonly) AuthLibKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) id<AuthLibKotlinCoroutineContext> parentCoroutineContext __attribute__((swift_name("parentCoroutineContext")));
@property (readonly) NSString *rootPath __attribute__((swift_name("rootPath")));
@end

__attribute__((swift_name("Ktor_server_host_commonApplicationEngineEnvironment")))
@protocol AuthLibKtor_server_host_commonApplicationEngineEnvironment <AuthLibKtor_server_coreApplicationEnvironment>
@required
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
@property (readonly) AuthLibKtor_server_coreApplication *application __attribute__((swift_name("application")));
@property (readonly) NSArray<id<AuthLibKtor_server_host_commonEngineConnectorConfig>> *connectors __attribute__((swift_name("connectors")));
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
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface AuthLibKtor_utilsPipelinePhase : AuthLibBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol AuthLibKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol AuthLibKotlinSuspendFunction2 <AuthLibKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol AuthLibKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(AuthLibKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(AuthLibKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey:(AuthLibKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(AuthLibKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(AuthLibKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(AuthLibKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(AuthLibKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(AuthLibKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<AuthLibKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationCallPipeline.ApplicationPhase")))
@interface AuthLibKtor_server_coreApplicationCallPipelineApplicationPhase : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)applicationPhase __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_server_coreApplicationCallPipelineApplicationPhase *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Call __attribute__((swift_name("Call")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Fallback __attribute__((swift_name("Fallback")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Features __attribute__((swift_name("Features"))) __attribute__((deprecated("Renamed to Plugins")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Plugins __attribute__((swift_name("Plugins")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Setup __attribute__((swift_name("Setup")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationReceivePipeline")))
@interface AuthLibKtor_server_coreApplicationReceivePipeline : AuthLibKtor_utilsPipeline<id, id<AuthLibKtor_server_coreApplicationCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AuthLibKotlinArray<AuthLibKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AuthLibKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AuthLibKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AuthLibKtor_server_coreApplicationReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationSendPipeline")))
@interface AuthLibKtor_server_coreApplicationSendPipeline : AuthLibKtor_utilsPipeline<id, id<AuthLibKtor_server_coreApplicationCall>>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(AuthLibKotlinArray<AuthLibKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(AuthLibKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<AuthLibKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AuthLibKtor_server_coreApplicationSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationCall")))
@protocol AuthLibKtor_server_coreApplicationCall
@required
@property (readonly) AuthLibKtor_server_coreApplication *application __attribute__((swift_name("application")));
@property (readonly) id<AuthLibKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<AuthLibKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) id<AuthLibKtor_server_coreApplicationRequest> request __attribute__((swift_name("request")));
@property (readonly) id<AuthLibKtor_server_coreApplicationResponse> response __attribute__((swift_name("response")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol AuthLibKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<AuthLibKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<AuthLibKotlinCoroutineContextElement> _Nullable)getKey_:(id<AuthLibKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<AuthLibKotlinCoroutineContext>)minusKeyKey:(id<AuthLibKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<AuthLibKotlinCoroutineContext>)plusContext:(id<AuthLibKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
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

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol AuthLibKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<AuthLibKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AuthLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<AuthLibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) AuthLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface AuthLibKotlinx_serialization_coreSerializersModule : AuthLibBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<AuthLibKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AuthLibKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<AuthLibKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<AuthLibKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AuthLibKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AuthLibKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<AuthLibKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<AuthLibKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol AuthLibKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface AuthLibKotlinx_serialization_coreSerialKind : AuthLibBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol AuthLibKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<AuthLibKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AuthLibKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<AuthLibKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<AuthLibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) AuthLibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface AuthLibKotlinNothing : AuthLibBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_host_commonConnectorType")))
@interface AuthLibKtor_server_host_commonConnectorType : AuthLibBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibKtor_server_host_commonConnectorTypeCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibKtor_server_host_commonConnectorType *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationConfig")))
@protocol AuthLibKtor_server_coreApplicationConfig
@required
- (id<AuthLibKtor_server_coreApplicationConfig>)configPath:(NSString *)path __attribute__((swift_name("config(path:)")));
- (NSArray<id<AuthLibKtor_server_coreApplicationConfig>> *)configListPath:(NSString *)path __attribute__((swift_name("configList(path:)")));
- (NSSet<NSString *> *)keys __attribute__((swift_name("keys()")));
- (id<AuthLibKtor_server_coreApplicationConfigValue>)propertyPath:(NSString *)path __attribute__((swift_name("property(path:)")));
- (id<AuthLibKtor_server_coreApplicationConfigValue> _Nullable)propertyOrNullPath:(NSString *)path __attribute__((swift_name("propertyOrNull(path:)")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@end

__attribute__((swift_name("Ktor_utilsLogger")))
@protocol AuthLibKtor_utilsLogger
@required
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (void)debugMessage:(NSString *)message cause:(AuthLibKotlinThrowable *)cause __attribute__((swift_name("debug(message:cause:)")));
- (void)errorMessage:(NSString *)message __attribute__((swift_name("error(message:)")));
- (void)errorMessage:(NSString *)message cause:(AuthLibKotlinThrowable *)cause __attribute__((swift_name("error(message:cause:)")));
- (void)infoMessage:(NSString *)message __attribute__((swift_name("info(message:)")));
- (void)infoMessage:(NSString *)message cause:(AuthLibKotlinThrowable *)cause __attribute__((swift_name("info(message:cause:)")));
- (void)traceMessage:(NSString *)message __attribute__((swift_name("trace(message:)")));
- (void)traceMessage:(NSString *)message cause:(AuthLibKotlinThrowable *)cause __attribute__((swift_name("trace(message:cause:)")));
- (void)warnMessage:(NSString *)message __attribute__((swift_name("warn(message:)")));
- (void)warnMessage:(NSString *)message cause:(AuthLibKotlinThrowable *)cause __attribute__((swift_name("warn(message:cause:)")));
@property (readonly) AuthLibKtor_utilsLogLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface AuthLibKtor_eventsEvents : AuthLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(AuthLibKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<AuthLibKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(AuthLibKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(AuthLibKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface AuthLibKtor_utilsAttributeKey<T> : AuthLibBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationReceivePipeline.Phases")))
@interface AuthLibKtor_server_coreApplicationReceivePipelinePhases : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_server_coreApplicationReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreApplicationSendPipeline.Phases")))
@interface AuthLibKtor_server_coreApplicationSendPipelinePhases : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_server_coreApplicationSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *ContentEncoding __attribute__((swift_name("ContentEncoding")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *TransferEncoding __attribute__((swift_name("TransferEncoding")));
@property (readonly) AuthLibKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol AuthLibKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AuthLibKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol AuthLibKtor_httpParameters <AuthLibKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_server_coreApplicationRequest")))
@protocol AuthLibKtor_server_coreApplicationRequest
@required
- (id<AuthLibKtor_ioByteReadChannel>)receiveChannel __attribute__((swift_name("receiveChannel()")));
@property (readonly) id<AuthLibKtor_server_coreApplicationCall> call __attribute__((swift_name("call")));
@property (readonly) AuthLibKtor_server_coreRequestCookies *cookies __attribute__((swift_name("cookies")));
@property (readonly) id<AuthLibKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) id<AuthLibKtor_httpRequestConnectionPoint> local __attribute__((swift_name("local")));
@property (readonly) AuthLibKtor_server_coreApplicationReceivePipeline *pipeline __attribute__((swift_name("pipeline")));
@property (readonly) id<AuthLibKtor_httpParameters> queryParameters __attribute__((swift_name("queryParameters")));
@property (readonly) id<AuthLibKtor_httpParameters> rawQueryParameters __attribute__((swift_name("rawQueryParameters")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationResponse")))
@protocol AuthLibKtor_server_coreApplicationResponse
@required
- (void)pushBuilder:(id<AuthLibKtor_server_coreResponsePushBuilder>)builder __attribute__((swift_name("push(builder:)")));
- (AuthLibKtor_httpHttpStatusCode * _Nullable)status __attribute__((swift_name("status()")));
- (void)statusValue:(AuthLibKtor_httpHttpStatusCode *)value __attribute__((swift_name("status(value:)")));
@property (readonly) id<AuthLibKtor_server_coreApplicationCall> call __attribute__((swift_name("call")));
@property (readonly) AuthLibKtor_server_coreResponseCookies *cookies __attribute__((swift_name("cookies")));
@property (readonly) AuthLibKtor_server_coreResponseHeaders *headers __attribute__((swift_name("headers")));
@property (readonly) BOOL isCommitted __attribute__((swift_name("isCommitted")));
@property (readonly) BOOL isSent __attribute__((swift_name("isSent")));
@property (readonly) AuthLibKtor_server_coreApplicationSendPipeline *pipeline __attribute__((swift_name("pipeline")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol AuthLibKotlinCoroutineContextElement <AuthLibKotlinCoroutineContext>
@required
@property (readonly) id<AuthLibKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol AuthLibKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface AuthLibKotlinByteIterator : AuthLibBase <AuthLibKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (AuthLibByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol AuthLibKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<AuthLibKotlinKClass>)kClass provider:(id<AuthLibKotlinx_serialization_coreKSerializer> (^)(NSArray<id<AuthLibKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<AuthLibKotlinKClass>)kClass serializer:(id<AuthLibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<AuthLibKotlinKClass>)baseClass actualClass:(id<AuthLibKotlinKClass>)actualClass actualSerializer:(id<AuthLibKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<AuthLibKotlinKClass>)baseClass defaultDeserializerProvider:(id<AuthLibKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<AuthLibKotlinKClass>)baseClass defaultDeserializerProvider:(id<AuthLibKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<AuthLibKotlinKClass>)baseClass defaultSerializerProvider:(id<AuthLibKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol AuthLibKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol AuthLibKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol AuthLibKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol AuthLibKotlinKClass <AuthLibKotlinKDeclarationContainer, AuthLibKotlinKAnnotatedElement, AuthLibKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_host_commonConnectorType.Companion")))
@interface AuthLibKtor_server_host_commonConnectorTypeCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_server_host_commonConnectorTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_server_host_commonConnectorType *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) AuthLibKtor_server_host_commonConnectorType *HTTPS __attribute__((swift_name("HTTPS")));
@end

__attribute__((swift_name("Ktor_server_coreApplicationConfigValue")))
@protocol AuthLibKtor_server_coreApplicationConfigValue
@required
- (NSArray<NSString *> *)getList __attribute__((swift_name("getList()")));
- (NSString *)getString __attribute__((swift_name("getString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsLogLevel")))
@interface AuthLibKtor_utilsLogLevel : AuthLibKotlinEnum<AuthLibKtor_utilsLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AuthLibKtor_utilsLogLevel *trace __attribute__((swift_name("trace")));
@property (class, readonly) AuthLibKtor_utilsLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) AuthLibKtor_utilsLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) AuthLibKtor_utilsLogLevel *warn __attribute__((swift_name("warn")));
@property (class, readonly) AuthLibKtor_utilsLogLevel *error __attribute__((swift_name("error")));
+ (AuthLibKotlinArray<AuthLibKtor_utilsLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AuthLibKtor_utilsLogLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface AuthLibKtor_eventsEventDefinition<T> : AuthLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol AuthLibKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol AuthLibKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol AuthLibKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(AuthLibKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(AuthLibLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(AuthLibKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(AuthLibLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AuthLibKtor_ioChunkBuffer *)dst completionHandler:(void (^)(AuthLibInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(AuthLibKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(AuthLibKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(AuthLibInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(AuthLibInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(AuthLibInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(AuthLibBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(AuthLibByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(AuthLibDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(AuthLibFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AuthLibKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(AuthLibKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(AuthLibInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(AuthLibLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(AuthLibKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(AuthLibKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<AuthLibKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(AuthLibShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<AuthLibKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<AuthLibKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(AuthLibBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) AuthLibKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_server_coreRequestCookies")))
@interface AuthLibKtor_server_coreRequestCookies : AuthLibBase
- (instancetype)initWithRequest:(id<AuthLibKtor_server_coreApplicationRequest>)request __attribute__((swift_name("init(request:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSDictionary<NSString *, NSString *> *)fetchCookies __attribute__((swift_name("fetchCookies()")));
- (NSString * _Nullable)getName:(NSString *)name encoding:(AuthLibKtor_httpCookieEncoding *)encoding __attribute__((swift_name("get(name:encoding:)")));
@property (readonly) NSDictionary<NSString *, NSString *> *rawCookies __attribute__((swift_name("rawCookies")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<AuthLibKtor_server_coreApplicationRequest> request __attribute__((swift_name("request")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol AuthLibKtor_httpHeaders <AuthLibKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpRequestConnectionPoint")))
@protocol AuthLibKtor_httpRequestConnectionPoint
@required
@property (readonly) NSString *host __attribute__((swift_name("host"))) __attribute__((deprecated("Use localHost or serverHost instead")));
@property (readonly) NSString *localAddress __attribute__((swift_name("localAddress")));
@property (readonly) NSString *localHost __attribute__((swift_name("localHost")));
@property (readonly) int32_t localPort __attribute__((swift_name("localPort")));
@property (readonly) AuthLibKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) int32_t port __attribute__((swift_name("port"))) __attribute__((deprecated("Use localPort or serverPort instead")));
@property (readonly) NSString *remoteAddress __attribute__((swift_name("remoteAddress")));
@property (readonly) NSString *remoteHost __attribute__((swift_name("remoteHost")));
@property (readonly) int32_t remotePort __attribute__((swift_name("remotePort")));
@property (readonly) NSString *scheme __attribute__((swift_name("scheme")));
@property (readonly) NSString *serverHost __attribute__((swift_name("serverHost")));
@property (readonly) int32_t serverPort __attribute__((swift_name("serverPort")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@property (readonly) NSString *version_ __attribute__((swift_name("version_")));
@end

__attribute__((swift_name("Ktor_server_coreResponsePushBuilder")))
@protocol AuthLibKtor_server_coreResponsePushBuilder
@required
@property (readonly) AuthLibKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property AuthLibKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) AuthLibKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@property (readonly) NSMutableArray<id<AuthLibKtor_httpVersion>> *versions __attribute__((swift_name("versions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface AuthLibKtor_httpHttpStatusCode : AuthLibBase <AuthLibKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(AuthLibKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (AuthLibKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (AuthLibKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_server_coreResponseCookies")))
@interface AuthLibKtor_server_coreResponseCookies : AuthLibBase
- (instancetype)initWithResponse:(id<AuthLibKtor_server_coreApplicationResponse>)response secureTransport:(BOOL)secureTransport __attribute__((swift_name("init(response:secureTransport:)"))) __attribute__((objc_designated_initializer));
- (void)appendItem:(AuthLibKtor_httpCookie *)item __attribute__((swift_name("append(item:)")));
- (void)appendName:(NSString *)name value:(NSString *)value encoding:(AuthLibKtor_httpCookieEncoding *)encoding maxAge:(int32_t)maxAge expires:(AuthLibKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("append(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)"))) __attribute__((unavailable("Convert maxAge to Long")));
- (void)appendName:(NSString *)name value:(NSString *)value encoding:(AuthLibKtor_httpCookieEncoding *)encoding maxAge:(int64_t)maxAge expires:(AuthLibKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions_:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("append(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions_:)")));
- (void)appendExpiredName:(NSString *)name domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path __attribute__((swift_name("appendExpired(name:domain:path:)"))) __attribute__((deprecated("This method doesn't bypass all flags and extensions so it will be removed in future major release. Please consider using append with expires parameter instead.")));
- (AuthLibKtor_httpCookie * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
@end

__attribute__((swift_name("Ktor_server_coreResponseHeaders")))
@interface AuthLibKtor_server_coreResponseHeaders : AuthLibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<AuthLibKtor_httpHeaders>)allValues __attribute__((swift_name("allValues()")));
- (void)appendName:(NSString *)name value:(NSString *)value safeOnly:(BOOL)safeOnly __attribute__((swift_name("append(name:value:safeOnly:)")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)engineAppendHeaderName:(NSString *)name value:(NSString *)value __attribute__((swift_name("engineAppendHeader(name:value:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<NSString *> *)getEngineHeaderNames __attribute__((swift_name("getEngineHeaderNames()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<NSString *> *)getEngineHeaderValuesName:(NSString *)name __attribute__((swift_name("getEngineHeaderValues(name:)")));
- (NSArray<NSString *> *)valuesName:(NSString *)name __attribute__((swift_name("values(name:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSSet<NSString *> *managedByEngineHeaders __attribute__((swift_name("managedByEngineHeaders")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface AuthLibKtor_ioMemory : AuthLibBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(AuthLibKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(AuthLibKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (AuthLibKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (AuthLibKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface AuthLibKtor_ioBuffer : AuthLibBase
- (instancetype)initWithMemory:(AuthLibKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) AuthLibKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (AuthLibKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(AuthLibKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) AuthLibKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface AuthLibKtor_ioChunkBuffer : AuthLibKtor_ioBuffer
- (instancetype)initWithMemory:(AuthLibKtor_ioMemory *)memory origin:(AuthLibKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<AuthLibKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(AuthLibKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AuthLibKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (AuthLibKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<AuthLibKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) AuthLibKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) AuthLibKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol AuthLibKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface AuthLibKtor_ioInput : AuthLibBase <AuthLibKtor_ioCloseable>
- (instancetype)initWithHead:(AuthLibKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AuthLibKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) AuthLibKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AuthLibKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AuthLibKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(AuthLibKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(AuthLibKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<AuthLibKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<AuthLibKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<AuthLibKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface AuthLibKtor_ioByteReadPacket : AuthLibKtor_ioInput
- (instancetype)initWithHead:(AuthLibKtor_ioChunkBuffer *)head pool:(id<AuthLibKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(AuthLibKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<AuthLibKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AuthLibKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (AuthLibKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (AuthLibKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(AuthLibKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol AuthLibKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (AuthLibKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol AuthLibKotlinSuspendFunction1 <AuthLibKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol AuthLibKotlinAppendable
@required
- (id<AuthLibKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<AuthLibKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<AuthLibKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookieEncoding")))
@interface AuthLibKtor_httpCookieEncoding : AuthLibKotlinEnum<AuthLibKtor_httpCookieEncoding *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AuthLibKtor_httpCookieEncoding *raw __attribute__((swift_name("raw")));
@property (class, readonly) AuthLibKtor_httpCookieEncoding *dquotes __attribute__((swift_name("dquotes")));
@property (class, readonly) AuthLibKtor_httpCookieEncoding *uriEncoding __attribute__((swift_name("uriEncoding")));
@property (class, readonly) AuthLibKtor_httpCookieEncoding *base64Encoding __attribute__((swift_name("base64Encoding")));
+ (AuthLibKotlinArray<AuthLibKtor_httpCookieEncoding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AuthLibKtor_httpCookieEncoding *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface AuthLibKtor_httpHttpMethod : AuthLibBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol AuthLibKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AuthLibKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AuthLibKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AuthLibKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AuthLibKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface AuthLibKtor_utilsStringValuesBuilderImpl : AuthLibBase <AuthLibKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<AuthLibKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<AuthLibKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<AuthLibKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<AuthLibKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) AuthLibMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface AuthLibKtor_httpHeadersBuilder : AuthLibKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<AuthLibKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface AuthLibKtor_httpURLBuilder : AuthLibBase
- (instancetype)initWithProtocol:(AuthLibKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<AuthLibKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<AuthLibKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AuthLibKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property AuthLibKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpVersion")))
@protocol AuthLibKtor_httpVersion
@required
- (void)appendHeadersToBuilder:(AuthLibKtor_httpHeadersBuilder *)builder __attribute__((swift_name("appendHeadersTo(builder:)")));
- (AuthLibKtor_httpVersionCheckResult *)checkRequestHeaders:(id<AuthLibKtor_httpHeaders>)requestHeaders __attribute__((swift_name("check(requestHeaders:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface AuthLibKtor_httpHttpStatusCodeCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (AuthLibKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<AuthLibKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpCookie")))
@interface AuthLibKtor_httpCookie : AuthLibBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value encoding:(AuthLibKtor_httpCookieEncoding *)encoding maxAge:(int32_t)maxAge expires:(AuthLibKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("init(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)"))) __attribute__((objc_designated_initializer));
- (AuthLibKtor_httpCookie *)doCopyName:(NSString *)name value:(NSString *)value encoding:(AuthLibKtor_httpCookieEncoding *)encoding maxAge:(int32_t)maxAge expires:(AuthLibKtor_utilsGMTDate * _Nullable)expires domain:(NSString * _Nullable)domain path:(NSString * _Nullable)path secure:(BOOL)secure httpOnly:(BOOL)httpOnly extensions:(NSDictionary<NSString *, id> *)extensions __attribute__((swift_name("doCopy(name:value:encoding:maxAge:expires:domain:path:secure:httpOnly:extensions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable domain __attribute__((swift_name("domain")));
@property (readonly) AuthLibKtor_httpCookieEncoding *encoding __attribute__((swift_name("encoding")));
@property (readonly) AuthLibKtor_utilsGMTDate * _Nullable expires __attribute__((swift_name("expires")));
@property (readonly) NSDictionary<NSString *, id> *extensions __attribute__((swift_name("extensions")));
@property (readonly) BOOL httpOnly __attribute__((swift_name("httpOnly")));
@property (readonly) int32_t maxAge __attribute__((swift_name("maxAge")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable path __attribute__((swift_name("path")));
@property (readonly) BOOL secure __attribute__((swift_name("secure")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface AuthLibKtor_utilsGMTDate : AuthLibBase <AuthLibKotlinComparable>
@property (class, readonly, getter=companion) AuthLibKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(AuthLibKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (AuthLibKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(AuthLibKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(AuthLibKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) AuthLibKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) AuthLibKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface AuthLibKtor_ioMemoryCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface AuthLibKtor_ioBufferCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol AuthLibKtor_ioObjectPool <AuthLibKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface AuthLibKtor_ioChunkBufferCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<AuthLibKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<AuthLibKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface AuthLibKtor_ioInputCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface AuthLibKtor_ioByteReadPacketCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface AuthLibKtor_httpHttpMethodCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (AuthLibKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<AuthLibKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) AuthLibKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) AuthLibKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) AuthLibKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) AuthLibKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) AuthLibKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) AuthLibKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) AuthLibKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface AuthLibKtor_httpURLProtocol : AuthLibBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AuthLibKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (AuthLibKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface AuthLibKtor_httpURLBuilderCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface AuthLibKtor_httpUrl : AuthLibBase
@property (class, readonly, getter=companion) AuthLibKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<AuthLibKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) AuthLibKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol AuthLibKtor_httpParametersBuilder <AuthLibKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpVersionCheckResult")))
@interface AuthLibKtor_httpVersionCheckResult : AuthLibKotlinEnum<AuthLibKtor_httpVersionCheckResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) AuthLibKtor_httpVersionCheckResult *ok __attribute__((swift_name("ok")));
@property (class, readonly) AuthLibKtor_httpVersionCheckResult *notModified __attribute__((swift_name("notModified")));
@property (class, readonly) AuthLibKtor_httpVersionCheckResult *preconditionFailed __attribute__((swift_name("preconditionFailed")));
+ (AuthLibKotlinArray<AuthLibKtor_httpVersionCheckResult *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AuthLibKtor_httpVersionCheckResult *> *entries __attribute__((swift_name("entries")));
@property (readonly) AuthLibKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface AuthLibKtor_utilsGMTDateCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) AuthLibKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface AuthLibKtor_utilsWeekDay : AuthLibKotlinEnum<AuthLibKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AuthLibKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AuthLibKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) AuthLibKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) AuthLibKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) AuthLibKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) AuthLibKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) AuthLibKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) AuthLibKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (AuthLibKotlinArray<AuthLibKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AuthLibKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface AuthLibKtor_utilsMonth : AuthLibKotlinEnum<AuthLibKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) AuthLibKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) AuthLibKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) AuthLibKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) AuthLibKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) AuthLibKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) AuthLibKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) AuthLibKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) AuthLibKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) AuthLibKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) AuthLibKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) AuthLibKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) AuthLibKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) AuthLibKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (AuthLibKotlinArray<AuthLibKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<AuthLibKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface AuthLibKtor_httpURLProtocolCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (AuthLibKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) AuthLibKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) AuthLibKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) AuthLibKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) AuthLibKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) AuthLibKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, AuthLibKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface AuthLibKtor_httpUrlCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface AuthLibKtor_utilsWeekDayCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (AuthLibKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AuthLibKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface AuthLibKtor_utilsMonthCompanion : AuthLibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AuthLibKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (AuthLibKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (AuthLibKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
