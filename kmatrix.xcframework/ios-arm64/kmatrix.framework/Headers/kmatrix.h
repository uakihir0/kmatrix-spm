#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmatrixCoreAccountDataGetRequest, KmatrixCoreAccountDataSetRequest, KmatrixCoreAccountsWhoamiResponse, KmatrixCoreAccountsWhoamiResponseCompanion, KmatrixCoreCapabilitiesGetResponse, KmatrixCoreCapabilitiesGetResponseBooleanCapability, KmatrixCoreCapabilitiesGetResponseBooleanCapabilityCompanion, KmatrixCoreCapabilitiesGetResponseCapabilities, KmatrixCoreCapabilitiesGetResponseCapabilitiesCompanion, KmatrixCoreCapabilitiesGetResponseChangePassword, KmatrixCoreCapabilitiesGetResponseChangePasswordCompanion, KmatrixCoreCapabilitiesGetResponseCompanion, KmatrixCoreCapabilitiesGetResponseRoomVersions, KmatrixCoreCapabilitiesGetResponseRoomVersionsCompanion, KmatrixCoreChangePasswordRequest, KmatrixCoreDeleteFilterRequest, KmatrixCoreDevice, KmatrixCoreDeviceCompanion, KmatrixCoreDevicesDeleteRequest, KmatrixCoreDevicesGetDeviceResponse, KmatrixCoreDevicesGetDeviceResponseCompanion, KmatrixCoreDevicesGetResponse, KmatrixCoreDevicesGetResponseCompanion, KmatrixCoreDevicesUpdateRequest, KmatrixCoreDirectoryGetPublicRoomsRequest, KmatrixCoreDirectoryGetPublicRoomsResponse, KmatrixCoreDirectoryGetPublicRoomsResponseCompanion, KmatrixCoreDirectoryResolveAliasResponse, KmatrixCoreDirectoryResolveAliasResponseCompanion, KmatrixCoreDirectorySetAliasRequest, KmatrixCoreEventFilter, KmatrixCoreEventFilterCompanion, KmatrixCoreEventsGetContextRequest, KmatrixCoreEventsGetContextResponse, KmatrixCoreEventsGetContextResponseCompanion, KmatrixCoreEventsGetContextResponseContextEvent, KmatrixCoreEventsGetContextResponseContextEventCompanion, KmatrixCoreEventsGetEventResponse, KmatrixCoreEventsGetEventResponseCompanion, KmatrixCoreFilterCreateRequest, KmatrixCoreFilterCreateResponse, KmatrixCoreFilterCreateResponseCompanion, KmatrixCoreFilterGetRequest, KmatrixCoreFilterGetResponse, KmatrixCoreFilterGetResponseCompanion, KmatrixCoreLoginFlow, KmatrixCoreLoginFlowCompanion, KmatrixCoreLoginGetLoginFlowsResponse, KmatrixCoreLoginGetLoginFlowsResponseCompanion, KmatrixCoreLoginPasswordRequest, KmatrixCoreLoginPasswordResponse, KmatrixCoreLoginPasswordResponseCompanion, KmatrixCoreLoginSsoRedirectRequest, KmatrixCoreMediaDownloadRequest, KmatrixCoreMediaGetConfigResponse, KmatrixCoreMediaGetConfigResponseCompanion, KmatrixCoreMediaPreviewUrlRequest, KmatrixCoreMediaPreviewUrlResponse, KmatrixCoreMediaPreviewUrlResponseCompanion, KmatrixCoreMediaThumbnailRequest, KmatrixCoreMediaUploadRequest, KmatrixCoreMediaUploadResponse, KmatrixCoreMediaUploadResponseCompanion, KmatrixCoreNotificationsGetRequest, KmatrixCoreNotificationsGetResponse, KmatrixCoreNotificationsGetResponseCompanion, KmatrixCoreNotificationsGetResponseEvent, KmatrixCoreNotificationsGetResponseEventCompanion, KmatrixCoreNotificationsGetResponseNotification, KmatrixCoreNotificationsGetResponseNotificationCompanion, KmatrixCorePresenceGetResponse, KmatrixCorePresenceGetResponseCompanion, KmatrixCorePresenceSetRequest, KmatrixCoreProfileGetAvatarUrlResponse, KmatrixCoreProfileGetAvatarUrlResponseCompanion, KmatrixCoreProfileGetDisplayNameResponse, KmatrixCoreProfileGetDisplayNameResponseCompanion, KmatrixCoreProfileGetProfileResponse, KmatrixCoreProfileGetProfileResponseCompanion, KmatrixCoreProfileSetAvatarUrlRequest, KmatrixCoreProfileSetDisplayNameRequest, KmatrixCorePublicRoomChunk, KmatrixCorePublicRoomChunkCompanion, KmatrixCorePushCondition, KmatrixCorePushConditionCompanion, KmatrixCorePushRule, KmatrixCorePushRuleCompanion, KmatrixCorePushRulesCreateRequest, KmatrixCorePushRulesDeleteRequest, KmatrixCorePushRulesGetEnabledResponse, KmatrixCorePushRulesGetEnabledResponseCompanion, KmatrixCorePushRulesGetResponse, KmatrixCorePushRulesGetResponseCompanion, KmatrixCorePushRulesSetEnabledRequest, KmatrixCorePushRuleset, KmatrixCorePushRulesetCompanion, KmatrixCorePusherData, KmatrixCorePushersGetResponse, KmatrixCorePushersGetResponseCompanion, KmatrixCorePushersGetResponsePusher, KmatrixCorePushersGetResponsePusherCompanion, KmatrixCorePushersGetResponsePusherData, KmatrixCorePushersGetResponsePusherDataCompanion, KmatrixCorePushersSetRequest, KmatrixCoreRateLimit, KmatrixCoreRateLimitCompanion, KmatrixCoreRegisterRequest, KmatrixCoreRegisterResponse, KmatrixCoreRegisterResponseCompanion, KmatrixCoreRelationsGetRequest, KmatrixCoreRelationsGetResponse, KmatrixCoreRelationsGetResponseCompanion, KmatrixCoreRelationsGetResponseRelationEvent, KmatrixCoreRelationsGetResponseRelationEventCompanion, KmatrixCoreResponse<T>, KmatrixCoreResponseUnit, KmatrixCoreRoomEvent, KmatrixCoreRoomEventCompanion, KmatrixCoreRoomEventFilter, KmatrixCoreRoomEventFilterCompanion, KmatrixCoreRoomFilter, KmatrixCoreRoomFilterCompanion, KmatrixCoreRoomMember, KmatrixCoreRoomMemberCompanion, KmatrixCoreRoomsBanRequest, KmatrixCoreRoomsCreateRoomRequest, KmatrixCoreRoomsCreateRoomResponse, KmatrixCoreRoomsCreateRoomResponseCompanion, KmatrixCoreRoomsForgetRoomRequest, KmatrixCoreRoomsGetJoinedMembersResponse, KmatrixCoreRoomsGetJoinedMembersResponseCompanion, KmatrixCoreRoomsGetJoinedRoomsResponse, KmatrixCoreRoomsGetJoinedRoomsResponseCompanion, KmatrixCoreRoomsGetMembersResponse, KmatrixCoreRoomsGetMembersResponseCompanion, KmatrixCoreRoomsGetMessagesRequest, KmatrixCoreRoomsGetMessagesResponse, KmatrixCoreRoomsGetMessagesResponseCompanion, KmatrixCoreRoomsGetRoomNameResponse, KmatrixCoreRoomsGetRoomNameResponseCompanion, KmatrixCoreRoomsInviteRequest, KmatrixCoreRoomsJoinRoomRequest, KmatrixCoreRoomsJoinRoomResponse, KmatrixCoreRoomsJoinRoomResponseCompanion, KmatrixCoreRoomsKickRequest, KmatrixCoreRoomsLeaveRoomRequest, KmatrixCoreRoomsRedactEventRequest, KmatrixCoreRoomsRedactEventResponse, KmatrixCoreRoomsRedactEventResponseCompanion, KmatrixCoreRoomsSendMessageRequest, KmatrixCoreRoomsSendMessageResponse, KmatrixCoreRoomsSendMessageResponseCompanion, KmatrixCoreRoomsSendReactionRequest, KmatrixCoreRoomsSendReceiptRequest, KmatrixCoreRoomsSendStateEventRequest, KmatrixCoreRoomsSendStateEventResponse, KmatrixCoreRoomsSendStateEventResponseCompanion, KmatrixCoreRoomsSetReadMarkersRequest, KmatrixCoreRoomsStateEvent, KmatrixCoreRoomsStateEventCompanion, KmatrixCoreRoomsTypingRequest, KmatrixCoreRoomsUnbanRequest, KmatrixCoreSearchCategories, KmatrixCoreSearchCategoriesCompanion, KmatrixCoreSearchRequest, KmatrixCoreSearchResponse, KmatrixCoreSearchResponseCompanion, KmatrixCoreSearchResult, KmatrixCoreSearchResultCompanion, KmatrixCoreSearchResultContent, KmatrixCoreSearchResultContentCompanion, KmatrixCoreSearchResultEvent, KmatrixCoreSearchResultEventCompanion, KmatrixCoreSearchRoomEvents, KmatrixCoreSearchRoomEventsCompanion, KmatrixCoreSyncAccountData, KmatrixCoreSyncAccountDataCompanion, KmatrixCoreSyncEphemeral, KmatrixCoreSyncEphemeralCompanion, KmatrixCoreSyncInviteState, KmatrixCoreSyncInviteStateCompanion, KmatrixCoreSyncInvitedRoom, KmatrixCoreSyncInvitedRoomCompanion, KmatrixCoreSyncJoinedRoom, KmatrixCoreSyncJoinedRoomCompanion, KmatrixCoreSyncLeftRoom, KmatrixCoreSyncLeftRoomCompanion, KmatrixCoreSyncRequest, KmatrixCoreSyncResponse, KmatrixCoreSyncResponseCompanion, KmatrixCoreSyncRoomSummary, KmatrixCoreSyncRoomSummaryCompanion, KmatrixCoreSyncRooms, KmatrixCoreSyncRoomsCompanion, KmatrixCoreSyncState, KmatrixCoreSyncStateCompanion, KmatrixCoreSyncTimeline, KmatrixCoreSyncTimelineCompanion, KmatrixCoreSyncUnreadNotifications, KmatrixCoreSyncUnreadNotificationsCompanion, KmatrixCoreTagContent, KmatrixCoreTagContentCompanion, KmatrixCoreTagsDeleteRequest, KmatrixCoreTagsGetResponse, KmatrixCoreTagsGetResponseCompanion, KmatrixCoreTagsSetRequest, KmatrixCoreThreadsGetRequest, KmatrixCoreThreadsGetResponse, KmatrixCoreThreadsGetResponseCompanion, KmatrixCoreThreadsGetResponseThreadEvent, KmatrixCoreThreadsGetResponseThreadEventCompanion, KmatrixCoreUserDirectorySearchRequest, KmatrixCoreUserDirectorySearchResponse, KmatrixCoreUserDirectorySearchResponseCompanion, KmatrixCoreUserDirectoryUser, KmatrixCoreUserDirectoryUserCompanion, KmatrixCoreVersionsGetResponse, KmatrixCoreVersionsGetResponseCompanion, KmatrixCoreVoIPGetTurnServerResponse, KmatrixCoreVoIPGetTurnServerResponseCompanion, KmatrixKhttpclientHttpResponse, KmatrixKhttpclientHttpResponseCompanion, KmatrixKmatrixFactory, KmatrixKotlinAbstractCoroutineContextElement, KmatrixKotlinAbstractCoroutineContextKey<B, E>, KmatrixKotlinArray<T>, KmatrixKotlinByteArray, KmatrixKotlinByteIterator, KmatrixKotlinCancellationException, KmatrixKotlinEnum<E>, KmatrixKotlinEnumCompanion, KmatrixKotlinException, KmatrixKotlinIllegalStateException, KmatrixKotlinInstant, KmatrixKotlinInstantCompanion, KmatrixKotlinKTypeProjection, KmatrixKotlinKTypeProjectionCompanion, KmatrixKotlinKVariance, KmatrixKotlinNothing, KmatrixKotlinRuntimeException, KmatrixKotlinThrowable, KmatrixKotlinUnit, KmatrixKotlinx_coroutines_coreCoroutineDispatcher, KmatrixKotlinx_coroutines_coreCoroutineDispatcherKey, KmatrixKotlinx_io_coreBuffer, KmatrixKotlinx_serialization_coreSerialKind, KmatrixKotlinx_serialization_coreSerializersModule, KmatrixKotlinx_serialization_jsonClassDiscriminatorMode, KmatrixKotlinx_serialization_jsonJson, KmatrixKotlinx_serialization_jsonJsonConfiguration, KmatrixKotlinx_serialization_jsonJsonDefault, KmatrixKotlinx_serialization_jsonJsonElement, KmatrixKotlinx_serialization_jsonJsonElementCompanion, KmatrixKtor_client_coreHttpClient, KmatrixKtor_client_coreHttpClientCall, KmatrixKtor_client_coreHttpClientCallCompanion, KmatrixKtor_client_coreHttpClientConfig<T>, KmatrixKtor_client_coreHttpClientEngineConfig, KmatrixKtor_client_coreHttpReceivePipeline, KmatrixKtor_client_coreHttpReceivePipelinePhases, KmatrixKtor_client_coreHttpRequestBuilder, KmatrixKtor_client_coreHttpRequestBuilderCompanion, KmatrixKtor_client_coreHttpRequestData, KmatrixKtor_client_coreHttpRequestPipeline, KmatrixKtor_client_coreHttpRequestPipelinePhases, KmatrixKtor_client_coreHttpResponse, KmatrixKtor_client_coreHttpResponseContainer, KmatrixKtor_client_coreHttpResponseData, KmatrixKtor_client_coreHttpResponsePipeline, KmatrixKtor_client_coreHttpResponsePipelinePhases, KmatrixKtor_client_coreHttpSendPipeline, KmatrixKtor_client_coreHttpSendPipelinePhases, KmatrixKtor_client_coreProxyConfig, KmatrixKtor_eventsEventDefinition<T>, KmatrixKtor_eventsEvents, KmatrixKtor_httpContentType, KmatrixKtor_httpContentTypeCompanion, KmatrixKtor_httpHeaderValueParam, KmatrixKtor_httpHeaderValueWithParameters, KmatrixKtor_httpHeaderValueWithParametersCompanion, KmatrixKtor_httpHeadersBuilder, KmatrixKtor_httpHttpMethod, KmatrixKtor_httpHttpMethodCompanion, KmatrixKtor_httpHttpProtocolVersion, KmatrixKtor_httpHttpProtocolVersionCompanion, KmatrixKtor_httpHttpStatusCode, KmatrixKtor_httpHttpStatusCodeCompanion, KmatrixKtor_httpOutgoingContent, KmatrixKtor_httpURLBuilder, KmatrixKtor_httpURLBuilderCompanion, KmatrixKtor_httpURLProtocol, KmatrixKtor_httpURLProtocolCompanion, KmatrixKtor_httpUrl, KmatrixKtor_httpUrlCompanion, KmatrixKtor_utilsAttributeKey<T>, KmatrixKtor_utilsGMTDate, KmatrixKtor_utilsGMTDateCompanion, KmatrixKtor_utilsMonth, KmatrixKtor_utilsMonthCompanion, KmatrixKtor_utilsPipeline<TSubject, TContext>, KmatrixKtor_utilsPipelinePhase, KmatrixKtor_utilsStringValuesBuilderImpl, KmatrixKtor_utilsTypeInfo, KmatrixKtor_utilsWeekDay, KmatrixKtor_utilsWeekDayCompanion;

@protocol KmatrixCoreAccountDataResource, KmatrixCoreAccountsResource, KmatrixCoreCapabilitiesResource, KmatrixCoreDevicesResource, KmatrixCoreDirectoryResource, KmatrixCoreEventsResource, KmatrixCoreFilterResource, KmatrixCoreLoginResource, KmatrixCoreMatrix, KmatrixCoreMediaResource, KmatrixCoreNotificationsResource, KmatrixCorePresenceResource, KmatrixCoreProfileResource, KmatrixCorePushRulesResource, KmatrixCorePushersResource, KmatrixCoreRelationsResource, KmatrixCoreRoomsResource, KmatrixCoreSearchResource, KmatrixCoreSyncResource, KmatrixCoreTagsResource, KmatrixCoreUserDirectoryResource, KmatrixCoreVersionsResource, KmatrixCoreVoIPResource, KmatrixKotlinAnnotation, KmatrixKotlinAutoCloseable, KmatrixKotlinComparable, KmatrixKotlinContinuation, KmatrixKotlinContinuationInterceptor, KmatrixKotlinCoroutineContext, KmatrixKotlinCoroutineContextElement, KmatrixKotlinCoroutineContextKey, KmatrixKotlinFunction, KmatrixKotlinIterator, KmatrixKotlinKAnnotatedElement, KmatrixKotlinKClass, KmatrixKotlinKClassifier, KmatrixKotlinKDeclarationContainer, KmatrixKotlinKType, KmatrixKotlinMapEntry, KmatrixKotlinSequence, KmatrixKotlinSuspendFunction2, KmatrixKotlinx_coroutines_coreChildHandle, KmatrixKotlinx_coroutines_coreChildJob, KmatrixKotlinx_coroutines_coreCoroutineScope, KmatrixKotlinx_coroutines_coreDisposableHandle, KmatrixKotlinx_coroutines_coreFlow, KmatrixKotlinx_coroutines_coreFlowCollector, KmatrixKotlinx_coroutines_coreJob, KmatrixKotlinx_coroutines_coreParentJob, KmatrixKotlinx_coroutines_coreRunnable, KmatrixKotlinx_coroutines_coreSelectClause, KmatrixKotlinx_coroutines_coreSelectClause0, KmatrixKotlinx_coroutines_coreSelectInstance, KmatrixKotlinx_io_coreRawSink, KmatrixKotlinx_io_coreRawSource, KmatrixKotlinx_io_coreSink, KmatrixKotlinx_io_coreSource, KmatrixKotlinx_serialization_coreCompositeDecoder, KmatrixKotlinx_serialization_coreCompositeEncoder, KmatrixKotlinx_serialization_coreDecoder, KmatrixKotlinx_serialization_coreDeserializationStrategy, KmatrixKotlinx_serialization_coreEncoder, KmatrixKotlinx_serialization_coreKSerializer, KmatrixKotlinx_serialization_coreSerialDescriptor, KmatrixKotlinx_serialization_coreSerialFormat, KmatrixKotlinx_serialization_coreSerializationStrategy, KmatrixKotlinx_serialization_coreSerializersModuleCollector, KmatrixKotlinx_serialization_coreStringFormat, KmatrixKotlinx_serialization_jsonJsonNamingStrategy, KmatrixKtor_client_coreHttpClientEngine, KmatrixKtor_client_coreHttpClientEngineCapability, KmatrixKtor_client_coreHttpClientPlugin, KmatrixKtor_client_coreHttpRequest, KmatrixKtor_httpHeaders, KmatrixKtor_httpHttpMessage, KmatrixKtor_httpHttpMessageBuilder, KmatrixKtor_httpParameters, KmatrixKtor_httpParametersBuilder, KmatrixKtor_ioByteReadChannel, KmatrixKtor_ioCloseable, KmatrixKtor_ioJvmSerializable, KmatrixKtor_utilsAttributes, KmatrixKtor_utilsStringValues, KmatrixKtor_utilsStringValuesBuilder, KmatrixStreamMatrixStream;

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
@interface KmatrixBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KmatrixBase (KmatrixBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KmatrixMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmatrixMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKmatrixKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KmatrixNumber : NSNumber
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
@interface KmatrixByte : KmatrixNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KmatrixUByte : KmatrixNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KmatrixShort : KmatrixNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KmatrixUShort : KmatrixNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KmatrixInt : KmatrixNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KmatrixUInt : KmatrixNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KmatrixLong : KmatrixNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KmatrixULong : KmatrixNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KmatrixFloat : KmatrixNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KmatrixDouble : KmatrixNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KmatrixBoolean : KmatrixNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmatrixFactory")))
@interface KmatrixKmatrixFactory : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmatrixFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKmatrixFactory *shared __attribute__((swift_name("shared")));
- (id<KmatrixCoreMatrix>)instanceUri:(NSString *)uri accessToken:(NSString *)accessToken __attribute__((swift_name("instance(uri:accessToken:)")));
- (id<KmatrixStreamMatrixStream>)streamUri:(NSString *)uri accessToken:(NSString *)accessToken __attribute__((swift_name("stream(uri:accessToken:)")));
@end

__attribute__((swift_name("CoreMatrix")))
@protocol KmatrixCoreMatrix
@required
- (NSString *)accessToken __attribute__((swift_name("accessToken()")));
- (id<KmatrixCoreAccountDataResource>)accountData __attribute__((swift_name("accountData()")));
- (id<KmatrixCoreAccountsResource>)accounts __attribute__((swift_name("accounts()")));
- (id<KmatrixCoreCapabilitiesResource>)capabilities __attribute__((swift_name("capabilities()")));
- (id<KmatrixCoreDevicesResource>)devices __attribute__((swift_name("devices()")));
- (id<KmatrixCoreDirectoryResource>)directory __attribute__((swift_name("directory()")));
- (id<KmatrixCoreEventsResource>)events __attribute__((swift_name("events()")));
- (id<KmatrixCoreFilterResource>)filter __attribute__((swift_name("filter()")));
- (id<KmatrixCoreLoginResource>)login __attribute__((swift_name("login()")));
- (id<KmatrixCoreMediaResource>)media __attribute__((swift_name("media()")));
- (id<KmatrixCoreNotificationsResource>)notifications __attribute__((swift_name("notifications()")));
- (id<KmatrixCorePresenceResource>)presence __attribute__((swift_name("presence()")));
- (id<KmatrixCoreProfileResource>)profile __attribute__((swift_name("profile()")));
- (id<KmatrixCorePushRulesResource>)pushRules __attribute__((swift_name("pushRules()")));
- (id<KmatrixCorePushersResource>)pushers __attribute__((swift_name("pushers()")));
- (id<KmatrixCoreRelationsResource>)relations __attribute__((swift_name("relations()")));
- (id<KmatrixCoreRoomsResource>)rooms __attribute__((swift_name("rooms()")));
- (id<KmatrixCoreSearchResource>)search __attribute__((swift_name("search()")));
- (id<KmatrixCoreSyncResource>)sync __attribute__((swift_name("sync()")));
- (id<KmatrixCoreTagsResource>)tags __attribute__((swift_name("tags()")));
- (NSString *)uri __attribute__((swift_name("uri()")));
- (id<KmatrixCoreUserDirectoryResource>)userDirectory __attribute__((swift_name("userDirectory()")));
- (id<KmatrixCoreVersionsResource>)versions __attribute__((swift_name("versions()")));
- (id<KmatrixCoreVoIPResource>)voip __attribute__((swift_name("voip()")));
@end

__attribute__((swift_name("StreamMatrixStream")))
@protocol KmatrixStreamMatrixStream
@required
- (NSString *)accessToken __attribute__((swift_name("accessToken()")));

/**
 * Starts a streaming sync that continuously polls for updates.
 * Uses long-polling with exponential backoff on errors.
 */
- (id<KmatrixKotlinx_coroutines_coreFlow>)syncStreamTimeout:(KmatrixLong * _Nullable)timeout maxRetry:(int32_t)maxRetry __attribute__((swift_name("syncStream(timeout:maxRetry:)")));

/**
 * Starts a streaming sync with a custom filter.
 */
- (id<KmatrixKotlinx_coroutines_coreFlow>)syncStreamRequest:(KmatrixCoreSyncRequest *)request maxRetry:(int32_t)maxRetry __attribute__((swift_name("syncStream(request:maxRetry:)")));
- (NSString *)uri __attribute__((swift_name("uri()")));
@end

__attribute__((swift_name("CoreAccountDataResource")))
@protocol KmatrixCoreAccountDataResource
@required

/**
 * GET /_matrix/client/v3/user/{userId}/account_data/{type}
 * Get some account data for the user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccountDataRequest:(KmatrixCoreAccountDataGetRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccountData(request:completionHandler:)")));
- (KmatrixCoreResponse<NSString *> *)getAccountDataBlockingRequest:(KmatrixCoreAccountDataGetRequest *)request __attribute__((swift_name("getAccountDataBlocking(request:)")));

/**
 * GET /_matrix/client/v3/user/{userId}/rooms/{roomId}/account_data/{type}
 * Get some account data for the user in a room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomAccountDataRequest:(KmatrixCoreAccountDataGetRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRoomAccountData(request:completionHandler:)")));
- (KmatrixCoreResponse<NSString *> *)getRoomAccountDataBlockingRequest:(KmatrixCoreAccountDataGetRequest *)request __attribute__((swift_name("getRoomAccountDataBlocking(request:)")));

/**
 * PUT /_matrix/client/v3/user/{userId}/account_data/{type}
 * Set some account data for the user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAccountDataRequest:(KmatrixCoreAccountDataSetRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAccountData(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setAccountDataBlockingRequest:(KmatrixCoreAccountDataSetRequest *)request __attribute__((swift_name("setAccountDataBlocking(request:)")));

/**
 * PUT /_matrix/client/v3/user/{userId}/rooms/{roomId}/account_data/{type}
 * Set some account data for the user in a room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setRoomAccountDataRequest:(KmatrixCoreAccountDataSetRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setRoomAccountData(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setRoomAccountDataBlockingRequest:(KmatrixCoreAccountDataSetRequest *)request __attribute__((swift_name("setRoomAccountDataBlocking(request:)")));
@end

__attribute__((swift_name("CoreAccountsResource")))
@protocol KmatrixCoreAccountsResource
@required

/**
 * Changes the password for the current account.
 * POST /_matrix/client/v3/account/password
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)changePasswordRequest:(KmatrixCoreChangePasswordRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("changePassword(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)changePasswordBlockingRequest:(KmatrixCoreChangePasswordRequest *)request __attribute__((swift_name("changePasswordBlocking(request:)")));

/**
 * Invalidates the current access token.
 * POST /_matrix/client/v3/logout
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));

/**
 * Invalidates all access tokens for the user.
 * POST /_matrix/client/v3/logout/all
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutAllWithCompletionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("logoutAll(completionHandler:)")));
- (KmatrixCoreResponseUnit *)logoutAllBlocking __attribute__((swift_name("logoutAllBlocking()")));
- (KmatrixCoreResponseUnit *)logoutBlocking __attribute__((swift_name("logoutBlocking()")));

/**
 * Creates a new account on the server.
 * POST /_matrix/client/v3/register
 * (No authentication required)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerRequest:(KmatrixCoreRegisterRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRegisterResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRegisterResponse *> *)registerBlockingRequest:(KmatrixCoreRegisterRequest *)request __attribute__((swift_name("registerBlocking(request:)")));

/**
 * Gets information about the owner of the access token.
 * GET /_matrix/client/v3/account/whoami
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)whoamiWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreAccountsWhoamiResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("whoami(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreAccountsWhoamiResponse *> *)whoamiBlocking __attribute__((swift_name("whoamiBlocking()")));
@end

__attribute__((swift_name("CoreCapabilitiesResource")))
@protocol KmatrixCoreCapabilitiesResource
@required

/**
 * GET /_matrix/client/v3/capabilities
 * Gets information about the server's supported feature set
 * and other relevant capabilities.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCapabilitiesWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreCapabilitiesGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCapabilities(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreCapabilitiesGetResponse *> *)getCapabilitiesBlocking __attribute__((swift_name("getCapabilitiesBlocking()")));
@end

__attribute__((swift_name("CoreDevicesResource")))
@protocol KmatrixCoreDevicesResource
@required

/**
 * DELETE /_matrix/client/v3/devices/{deviceId}
 * Deletes the given device and invalidates its access token.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteDeviceRequest:(KmatrixCoreDevicesDeleteRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteDevice(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)deleteDeviceBlockingRequest:(KmatrixCoreDevicesDeleteRequest *)request __attribute__((swift_name("deleteDeviceBlocking(request:)")));

/**
 * GET /_matrix/client/v3/devices/{deviceId}
 * Gets information on a single device by device id.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDeviceDeviceId:(NSString *)deviceId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreDevicesGetDeviceResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDevice(deviceId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreDevicesGetDeviceResponse *> *)getDeviceBlockingDeviceId:(NSString *)deviceId __attribute__((swift_name("getDeviceBlocking(deviceId:)")));

/**
 * GET /_matrix/client/v3/devices
 * Gets information about all devices for the current user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDevicesWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreDevicesGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDevices(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreDevicesGetResponse *> *)getDevicesBlocking __attribute__((swift_name("getDevicesBlocking()")));

/**
 * PUT /_matrix/client/v3/devices/{deviceId}
 * Updates the metadata on the given device.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateDeviceRequest:(KmatrixCoreDevicesUpdateRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateDevice(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)updateDeviceBlockingRequest:(KmatrixCoreDevicesUpdateRequest *)request __attribute__((swift_name("updateDeviceBlocking(request:)")));
@end

__attribute__((swift_name("CoreDirectoryResource")))
@protocol KmatrixCoreDirectoryResource
@required

/**
 * DELETE /_matrix/client/v3/directory/room/{roomAlias}
 * Remove a mapping of room alias to room ID.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAliasRoomAlias:(NSString *)roomAlias completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAlias(roomAlias:completionHandler:)")));
- (KmatrixCoreResponseUnit *)deleteAliasBlockingRoomAlias:(NSString *)roomAlias __attribute__((swift_name("deleteAliasBlocking(roomAlias:)")));

/**
 * GET /_matrix/client/v3/publicRooms
 * Lists the public rooms on the server.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPublicRoomsRequest:(KmatrixCoreDirectoryGetPublicRoomsRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreDirectoryGetPublicRoomsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPublicRooms(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreDirectoryGetPublicRoomsResponse *> *)getPublicRoomsBlockingRequest:(KmatrixCoreDirectoryGetPublicRoomsRequest *)request __attribute__((swift_name("getPublicRoomsBlocking(request:)")));

/**
 * GET /_matrix/client/v3/directory/room/{roomAlias}
 * Resolve a room alias to a room ID.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)resolveAliasRoomAlias:(NSString *)roomAlias completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreDirectoryResolveAliasResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("resolveAlias(roomAlias:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreDirectoryResolveAliasResponse *> *)resolveAliasBlockingRoomAlias:(NSString *)roomAlias __attribute__((swift_name("resolveAliasBlocking(roomAlias:)")));

/**
 * PUT /_matrix/client/v3/directory/room/{roomAlias}
 * Create a new mapping from room alias to room ID.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAliasRequest:(KmatrixCoreDirectorySetAliasRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAlias(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setAliasBlockingRequest:(KmatrixCoreDirectorySetAliasRequest *)request __attribute__((swift_name("setAliasBlocking(request:)")));
@end

__attribute__((swift_name("CoreEventsResource")))
@protocol KmatrixCoreEventsResource
@required

/**
 * GET /_matrix/client/v3/rooms/{roomId}/context/{eventId}
 * Get a number of events that happened just before and after
 * the specified event.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getContextRequest:(KmatrixCoreEventsGetContextRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreEventsGetContextResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContext(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreEventsGetContextResponse *> *)getContextBlockingRequest:(KmatrixCoreEventsGetContextRequest *)request __attribute__((swift_name("getContextBlocking(request:)")));

/**
 * GET /_matrix/client/v3/rooms/{roomId}/event/{eventId}
 * Get a single event based on roomId/eventId.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventRoomId:(NSString *)roomId eventId:(NSString *)eventId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreEventsGetEventResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEvent(roomId:eventId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreEventsGetEventResponse *> *)getEventBlockingRoomId:(NSString *)roomId eventId:(NSString *)eventId __attribute__((swift_name("getEventBlocking(roomId:eventId:)")));
@end

__attribute__((swift_name("CoreFilterResource")))
@protocol KmatrixCoreFilterResource
@required

/**
 * POST /_matrix/client/v3/user/{userId}/filter
 * Upload a new filter definition to the homeserver.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createFilterRequest:(KmatrixCoreFilterCreateRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreFilterCreateResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createFilter(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreFilterCreateResponse *> *)createFilterBlockingRequest:(KmatrixCoreFilterCreateRequest *)request __attribute__((swift_name("createFilterBlocking(request:)")));

/**
 * DELETE /_matrix/client/v3/user/{userId}/filter/{filterId}
 * Delete a filter.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteFilterRequest:(KmatrixCoreDeleteFilterRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteFilter(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)deleteFilterBlockingRequest:(KmatrixCoreDeleteFilterRequest *)request __attribute__((swift_name("deleteFilterBlocking(request:)")));

/**
 * GET /_matrix/client/v3/user/{userId}/filter/{filterId}
 * Download a filter.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFilterRequest:(KmatrixCoreFilterGetRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreFilterGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFilter(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreFilterGetResponse *> *)getFilterBlockingRequest:(KmatrixCoreFilterGetRequest *)request __attribute__((swift_name("getFilterBlocking(request:)")));
@end

__attribute__((swift_name("CoreLoginResource")))
@protocol KmatrixCoreLoginResource
@required

/**
 * Gets the homeserver's supported login types.
 * GET /_matrix/client/v3/login
 * (No authentication required)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLoginFlowsWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreLoginGetLoginFlowsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLoginFlows(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreLoginGetLoginFlowsResponse *> *)getLoginFlowsBlocking __attribute__((swift_name("getLoginFlowsBlocking()")));

/**
 * Authenticates the user with password and returns an access token.
 * POST /_matrix/client/v3/login
 * (No authentication required)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithPasswordRequest:(KmatrixCoreLoginPasswordRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreLoginPasswordResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithPassword(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreLoginPasswordResponse *> *)loginWithPasswordBlockingRequest:(KmatrixCoreLoginPasswordRequest *)request __attribute__((swift_name("loginWithPasswordBlocking(request:)")));

/**
 * Returns the SSO redirect URL for browser-based authentication.
 * GET /_matrix/client/v3/login/sso/redirect?redirectUrl={redirectUrl}
 * (No authentication required)
 */
- (NSString *)ssoRedirectUrlRequest:(KmatrixCoreLoginSsoRedirectRequest *)request __attribute__((swift_name("ssoRedirectUrl(request:)")));
@end

__attribute__((swift_name("CoreMediaResource")))
@protocol KmatrixCoreMediaResource
@required

/**
 * GET /_matrix/client/v1/media/download/{serverName}/{mediaId}
 * Download content from the content repository (authenticated media,
 * Matrix 1.11 / MSC3916). Falls back to the legacy unauthenticated
 * GET /_matrix/media/v3/download/{serverName}/{mediaId} on older servers.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)downloadRequest:(KmatrixCoreMediaDownloadRequest *)request completionHandler:(void (^)(KmatrixKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("download(request:completionHandler:)")));
- (KmatrixKotlinByteArray *)downloadBlockingRequest:(KmatrixCoreMediaDownloadRequest *)request __attribute__((swift_name("downloadBlocking(request:)")));

/**
 * GET /_matrix/media/v3/config
 * Get the media repository configuration.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreMediaGetConfigResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfig(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreMediaGetConfigResponse *> *)getConfigBlocking __attribute__((swift_name("getConfigBlocking()")));

/**
 * GET /_matrix/media/v3/preview_url
 * Get information about a URL for the client.
 * This includes OpenGraph data and an optional image.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)previewUrlRequest:(KmatrixCoreMediaPreviewUrlRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreMediaPreviewUrlResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("previewUrl(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreMediaPreviewUrlResponse *> *)previewUrlBlockingRequest:(KmatrixCoreMediaPreviewUrlRequest *)request __attribute__((swift_name("previewUrlBlocking(request:)")));

/**
 * GET /_matrix/client/v1/media/thumbnail/{serverName}/{mediaId}
 * Download a thumbnail of content from the content repository
 * (authenticated media, Matrix 1.11 / MSC3916). Falls back to the legacy
 * GET /_matrix/media/v3/thumbnail/{serverName}/{mediaId} on older servers.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)thumbnailRequest:(KmatrixCoreMediaThumbnailRequest *)request completionHandler:(void (^)(KmatrixKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("thumbnail(request:completionHandler:)")));
- (KmatrixKotlinByteArray *)thumbnailBlockingRequest:(KmatrixCoreMediaThumbnailRequest *)request __attribute__((swift_name("thumbnailBlocking(request:)")));

/**
 * POST /_matrix/media/v3/upload
 * Upload some content to the content repository.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadRequest:(KmatrixCoreMediaUploadRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreMediaUploadResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreMediaUploadResponse *> *)uploadBlockingRequest:(KmatrixCoreMediaUploadRequest *)request __attribute__((swift_name("uploadBlocking(request:)")));
@end

__attribute__((swift_name("CoreNotificationsResource")))
@protocol KmatrixCoreNotificationsResource
@required

/**
 * GET /_matrix/client/v3/notifications
 * Gets a list of events that the user has been notified about.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNotificationsRequest:(KmatrixCoreNotificationsGetRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreNotificationsGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNotifications(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreNotificationsGetResponse *> *)getNotificationsBlockingRequest:(KmatrixCoreNotificationsGetRequest *)request __attribute__((swift_name("getNotificationsBlocking(request:)")));
@end

__attribute__((swift_name("CorePresenceResource")))
@protocol KmatrixCorePresenceResource
@required

/**
 * GET /_matrix/client/v3/presence/{userId}/status
 * Get the given user's presence state.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPresenceUserId:(NSString *)userId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCorePresenceGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPresence(userId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCorePresenceGetResponse *> *)getPresenceBlockingUserId:(NSString *)userId __attribute__((swift_name("getPresenceBlocking(userId:)")));

/**
 * PUT /_matrix/client/v3/presence/{userId}/status
 * Set the given user's presence state.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setPresenceRequest:(KmatrixCorePresenceSetRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setPresence(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setPresenceBlockingRequest:(KmatrixCorePresenceSetRequest *)request __attribute__((swift_name("setPresenceBlocking(request:)")));
@end

__attribute__((swift_name("CoreProfileResource")))
@protocol KmatrixCoreProfileResource
@required

/**
 * GET /_matrix/client/v3/profile/{userId}/avatar_url
 * Get the user's avatar URL.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAvatarUrlUserId:(NSString *)userId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreProfileGetAvatarUrlResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAvatarUrl(userId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreProfileGetAvatarUrlResponse *> *)getAvatarUrlBlockingUserId:(NSString *)userId __attribute__((swift_name("getAvatarUrlBlocking(userId:)")));

/**
 * GET /_matrix/client/v3/profile/{userId}/displayname
 * Get the user's display name.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDisplayNameUserId:(NSString *)userId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreProfileGetDisplayNameResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDisplayName(userId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreProfileGetDisplayNameResponse *> *)getDisplayNameBlockingUserId:(NSString *)userId __attribute__((swift_name("getDisplayNameBlocking(userId:)")));

/**
 * GET /_matrix/client/v3/profile/{userId}
 * Get the combined profile information for this user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfileUserId:(NSString *)userId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreProfileGetProfileResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfile(userId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreProfileGetProfileResponse *> *)getProfileBlockingUserId:(NSString *)userId __attribute__((swift_name("getProfileBlocking(userId:)")));

/**
 * PUT /_matrix/client/v3/profile/{userId}/avatar_url
 * Set the user's avatar URL.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setAvatarUrlRequest:(KmatrixCoreProfileSetAvatarUrlRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setAvatarUrl(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setAvatarUrlBlockingRequest:(KmatrixCoreProfileSetAvatarUrlRequest *)request __attribute__((swift_name("setAvatarUrlBlocking(request:)")));

/**
 * PUT /_matrix/client/v3/profile/{userId}/displayname
 * Set the user's display name.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setDisplayNameRequest:(KmatrixCoreProfileSetDisplayNameRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setDisplayName(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setDisplayNameBlockingRequest:(KmatrixCoreProfileSetDisplayNameRequest *)request __attribute__((swift_name("setDisplayNameBlocking(request:)")));
@end

__attribute__((swift_name("CorePushRulesResource")))
@protocol KmatrixCorePushRulesResource
@required

/**
 * PUT /_matrix/client/v3/pushrules/{scope}/{kind}/{ruleId}
 * Create or replace a push rule.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRuleRequest:(KmatrixCorePushRulesCreateRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createRule(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)createRuleBlockingRequest:(KmatrixCorePushRulesCreateRequest *)request __attribute__((swift_name("createRuleBlocking(request:)")));

/**
 * DELETE /_matrix/client/v3/pushrules/{scope}/{kind}/{ruleId}
 * Delete a push rule.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteRuleRequest:(KmatrixCorePushRulesDeleteRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteRule(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)deleteRuleBlockingRequest:(KmatrixCorePushRulesDeleteRequest *)request __attribute__((swift_name("deleteRuleBlocking(request:)")));

/**
 * GET /_matrix/client/v3/pushrules/{scope}/{kind}/{ruleId}/enabled
 * Get whether a push rule is enabled.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEnabledScope:(NSString *)scope kind:(NSString *)kind ruleId:(NSString *)ruleId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCorePushRulesGetEnabledResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEnabled(scope:kind:ruleId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCorePushRulesGetEnabledResponse *> *)getEnabledBlockingScope:(NSString *)scope kind:(NSString *)kind ruleId:(NSString *)ruleId __attribute__((swift_name("getEnabledBlocking(scope:kind:ruleId:)")));

/**
 * GET /_matrix/client/v3/pushrules/
 * Retrieve all push rulesets.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPushRulesWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCorePushRulesGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPushRules(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCorePushRulesGetResponse *> *)getPushRulesBlocking __attribute__((swift_name("getPushRulesBlocking()")));

/**
 * PUT /_matrix/client/v3/pushrules/{scope}/{kind}/{ruleId}/enabled
 * Enable or disable a push rule.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setEnabledRequest:(KmatrixCorePushRulesSetEnabledRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setEnabled(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setEnabledBlockingRequest:(KmatrixCorePushRulesSetEnabledRequest *)request __attribute__((swift_name("setEnabledBlocking(request:)")));
@end

__attribute__((swift_name("CorePushersResource")))
@protocol KmatrixCorePushersResource
@required

/**
 * GET /_matrix/client/v3/pushers
 * Gets all currently active pushers for the authenticated user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPushersWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCorePushersGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPushers(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCorePushersGetResponse *> *)getPushersBlocking __attribute__((swift_name("getPushersBlocking()")));

/**
 * POST /_matrix/client/v3/pushers/set
 * This endpoint allows the creation, modification and deletion of pushers
 * for this user ID. The behaviour of this endpoint varies depending on the
 * values in the JSON body.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setPusherRequest:(KmatrixCorePushersSetRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setPusher(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setPusherBlockingRequest:(KmatrixCorePushersSetRequest *)request __attribute__((swift_name("setPusherBlocking(request:)")));
@end

__attribute__((swift_name("CoreRelationsResource")))
@protocol KmatrixCoreRelationsResource
@required

/**
 * GET /_matrix/client/v1/rooms/{roomId}/relations/{eventId}
 * Get events related to a given event (replies, reactions, edits, etc.)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRelationsRequest:(KmatrixCoreRelationsGetRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRelationsGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRelations(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRelationsGetResponse *> *)getRelationsBlockingRequest:(KmatrixCoreRelationsGetRequest *)request __attribute__((swift_name("getRelationsBlocking(request:)")));

/**
 * GET /_matrix/client/v1/rooms/{roomId}/threads
 * Get threads in a room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getThreadsRequest:(KmatrixCoreThreadsGetRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreThreadsGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThreads(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreThreadsGetResponse *> *)getThreadsBlockingRequest:(KmatrixCoreThreadsGetRequest *)request __attribute__((swift_name("getThreadsBlocking(request:)")));
@end

__attribute__((swift_name("CoreRoomsResource")))
@protocol KmatrixCoreRoomsResource
@required

/**
 * POST /_matrix/client/v3/rooms/{roomId}/ban
 * Ban a user from the room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)banRequest:(KmatrixCoreRoomsBanRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ban(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)banBlockingRequest:(KmatrixCoreRoomsBanRequest *)request __attribute__((swift_name("banBlocking(request:)")));

/**
 * POST /_matrix/client/v3/createRoom
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createRoomRequest:(KmatrixCoreRoomsCreateRoomRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsCreateRoomResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createRoom(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsCreateRoomResponse *> *)createRoomBlockingRequest:(KmatrixCoreRoomsCreateRoomRequest *)request __attribute__((swift_name("createRoomBlocking(request:)")));

/**
 * POST /_matrix/client/v3/rooms/{roomId}/forget
 * Stop remembering a particular room (remove from room list).
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)forgetRoomRequest:(KmatrixCoreRoomsForgetRoomRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("forgetRoom(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)forgetRoomBlockingRequest:(KmatrixCoreRoomsForgetRoomRequest *)request __attribute__((swift_name("forgetRoomBlocking(request:)")));

/**
 * GET /_matrix/client/v3/rooms/{roomId}/joined_members
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getJoinedMembersRoomId:(NSString *)roomId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsGetJoinedMembersResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getJoinedMembers(roomId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsGetJoinedMembersResponse *> *)getJoinedMembersBlockingRoomId:(NSString *)roomId __attribute__((swift_name("getJoinedMembersBlocking(roomId:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getJoinedRoomsWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsGetJoinedRoomsResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getJoinedRooms(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsGetJoinedRoomsResponse *> *)getJoinedRoomsBlocking __attribute__((swift_name("getJoinedRoomsBlocking()")));

/**
 * GET /_matrix/client/v3/rooms/{roomId}/members
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMembersRoomId:(NSString *)roomId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsGetMembersResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMembers(roomId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsGetMembersResponse *> *)getMembersBlockingRoomId:(NSString *)roomId __attribute__((swift_name("getMembersBlocking(roomId:)")));

/**
 * GET /_matrix/client/v3/rooms/{roomId}/messages
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMessagesRequest:(KmatrixCoreRoomsGetMessagesRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsGetMessagesResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMessages(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsGetMessagesResponse *> *)getMessagesBlockingRequest:(KmatrixCoreRoomsGetMessagesRequest *)request __attribute__((swift_name("getMessagesBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRoomNameRoomId:(NSString *)roomId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsGetRoomNameResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRoomName(roomId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsGetRoomNameResponse *> *)getRoomNameBlockingRoomId:(NSString *)roomId __attribute__((swift_name("getRoomNameBlocking(roomId:)")));

/**
 * GET /_matrix/client/v3/rooms/{roomId}/state
 * Get all state events in a room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStateRoomId:(NSString *)roomId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixKotlinArray<KmatrixCoreRoomsStateEvent *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getState(roomId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixKotlinArray<KmatrixCoreRoomsStateEvent *> *> *)getStateBlockingRoomId:(NSString *)roomId __attribute__((swift_name("getStateBlocking(roomId:)")));

/**
 * GET /_matrix/client/v3/rooms/{roomId}/state/{eventType}/{stateKey}
 * Get a state event in a room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStateEventRoomId:(NSString *)roomId eventType:(NSString *)eventType stateKey:(NSString *)stateKey completionHandler:(void (^)(KmatrixCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStateEvent(roomId:eventType:stateKey:completionHandler:)")));
- (KmatrixCoreResponse<NSString *> *)getStateEventBlockingRoomId:(NSString *)roomId eventType:(NSString *)eventType stateKey:(NSString *)stateKey __attribute__((swift_name("getStateEventBlocking(roomId:eventType:stateKey:)")));

/**
 * POST /_matrix/client/v3/rooms/{roomId}/invite
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)inviteRequest:(KmatrixCoreRoomsInviteRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invite(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)inviteBlockingRequest:(KmatrixCoreRoomsInviteRequest *)request __attribute__((swift_name("inviteBlocking(request:)")));

/**
 * POST /_matrix/client/v3/join/{roomIdOrAlias}
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinRoomRequest:(KmatrixCoreRoomsJoinRoomRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsJoinRoomResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("joinRoom(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsJoinRoomResponse *> *)joinRoomBlockingRequest:(KmatrixCoreRoomsJoinRoomRequest *)request __attribute__((swift_name("joinRoomBlocking(request:)")));

/**
 * POST /_matrix/client/v3/rooms/{roomId}/kick
 * Kick a user from the room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)kickRequest:(KmatrixCoreRoomsKickRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("kick(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)kickBlockingRequest:(KmatrixCoreRoomsKickRequest *)request __attribute__((swift_name("kickBlocking(request:)")));

/**
 * POST /_matrix/client/v3/rooms/{roomId}/leave
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)leaveRoomRequest:(KmatrixCoreRoomsLeaveRoomRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("leaveRoom(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)leaveRoomBlockingRequest:(KmatrixCoreRoomsLeaveRoomRequest *)request __attribute__((swift_name("leaveRoomBlocking(request:)")));

/**
 * PUT /_matrix/client/v3/rooms/{roomId}/redact/{eventId}/{txnId}
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)redactEventRequest:(KmatrixCoreRoomsRedactEventRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsRedactEventResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("redactEvent(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsRedactEventResponse *> *)redactEventBlockingRequest:(KmatrixCoreRoomsRedactEventRequest *)request __attribute__((swift_name("redactEventBlocking(request:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendMessageRequest:(KmatrixCoreRoomsSendMessageRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsSendMessageResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendMessage(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsSendMessageResponse *> *)sendMessageBlockingRequest:(KmatrixCoreRoomsSendMessageRequest *)request __attribute__((swift_name("sendMessageBlocking(request:)")));

/**
 * PUT /_matrix/client/v3/rooms/{roomId}/send/m.reaction/{txnId}
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendReactionRequest:(KmatrixCoreRoomsSendReactionRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsSendMessageResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendReaction(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsSendMessageResponse *> *)sendReactionBlockingRequest:(KmatrixCoreRoomsSendReactionRequest *)request __attribute__((swift_name("sendReactionBlocking(request:)")));

/**
 * POST /_matrix/client/v3/rooms/{roomId}/receipt/{receiptType}/{eventId}
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendReceiptRequest:(KmatrixCoreRoomsSendReceiptRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendReceipt(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)sendReceiptBlockingRequest:(KmatrixCoreRoomsSendReceiptRequest *)request __attribute__((swift_name("sendReceiptBlocking(request:)")));

/**
 * PUT /_matrix/client/v3/rooms/{roomId}/state/{eventType}/{stateKey}
 * Send a state event to the given room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendStateEventRequest:(KmatrixCoreRoomsSendStateEventRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreRoomsSendStateEventResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendStateEvent(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreRoomsSendStateEventResponse *> *)sendStateEventBlockingRequest:(KmatrixCoreRoomsSendStateEventRequest *)request __attribute__((swift_name("sendStateEventBlocking(request:)")));

/**
 * POST /_matrix/client/v3/rooms/{roomId}/read_markers
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setReadMarkersRequest:(KmatrixCoreRoomsSetReadMarkersRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setReadMarkers(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setReadMarkersBlockingRequest:(KmatrixCoreRoomsSetReadMarkersRequest *)request __attribute__((swift_name("setReadMarkersBlocking(request:)")));

/**
 * PUT /_matrix/client/v3/rooms/{roomId}/typing/{userId}
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setTypingRequest:(KmatrixCoreRoomsTypingRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setTyping(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setTypingBlockingRequest:(KmatrixCoreRoomsTypingRequest *)request __attribute__((swift_name("setTypingBlocking(request:)")));

/**
 * POST /_matrix/client/v3/rooms/{roomId}/unban
 * Unban a user from the room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unbanRequest:(KmatrixCoreRoomsUnbanRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unban(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)unbanBlockingRequest:(KmatrixCoreRoomsUnbanRequest *)request __attribute__((swift_name("unbanBlocking(request:)")));
@end

__attribute__((swift_name("CoreSearchResource")))
@protocol KmatrixCoreSearchResource
@required

/**
 * POST /_matrix/client/v3/search
 * Perform a server-side search.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchRequest:(KmatrixCoreSearchRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreSearchResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreSearchResponse *> *)searchBlockingRequest:(KmatrixCoreSearchRequest *)request __attribute__((swift_name("searchBlocking(request:)")));
@end

__attribute__((swift_name("CoreSyncResource")))
@protocol KmatrixCoreSyncResource
@required

/**
 * GET /_matrix/client/v3/sync
 * Synchronise the client's state with the latest state on the server.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)syncRequest:(KmatrixCoreSyncRequest *)request completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreSyncResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sync(request:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreSyncResponse *> *)syncBlockingRequest:(KmatrixCoreSyncRequest *)request __attribute__((swift_name("syncBlocking(request:)")));
@end

__attribute__((swift_name("CoreTagsResource")))
@protocol KmatrixCoreTagsResource
@required

/**
 * DELETE /_matrix/client/v3/user/{userId}/rooms/{roomId}/tags/{tag}
 * Remove a tag from a room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteTagRequest:(KmatrixCoreTagsDeleteRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteTag(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)deleteTagBlockingRequest:(KmatrixCoreTagsDeleteRequest *)request __attribute__((swift_name("deleteTagBlocking(request:)")));

/**
 * GET /_matrix/client/v3/user/{userId}/rooms/{roomId}/tags
 * List the tags set on a room by a user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTagsUserId:(NSString *)userId roomId:(NSString *)roomId completionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreTagsGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTags(userId:roomId:completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreTagsGetResponse *> *)getTagsBlockingUserId:(NSString *)userId roomId:(NSString *)roomId __attribute__((swift_name("getTagsBlocking(userId:roomId:)")));

/**
 * PUT /_matrix/client/v3/user/{userId}/rooms/{roomId}/tags/{tag}
 * Add a tag to a room.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setTagRequest:(KmatrixCoreTagsSetRequest *)request completionHandler:(void (^)(KmatrixCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setTag(request:completionHandler:)")));
- (KmatrixCoreResponseUnit *)setTagBlockingRequest:(KmatrixCoreTagsSetRequest *)request __attribute__((swift_name("setTagBlocking(request:)")));
@end

__attribute__((swift_name("CoreUserDirectoryResource")))
@protocol KmatrixCoreUserDirectoryResource
@required

/**
 * POST /_matrix/client/v3/user_directory/search
 * Searches the user directory for users.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchRequest:(KmatrixCoreUserDirectorySearchRequest *)request completionHandler_:(void (^)(KmatrixCoreResponse<KmatrixCoreUserDirectorySearchResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(request:completionHandler_:)")));
- (KmatrixCoreResponse<KmatrixCoreUserDirectorySearchResponse *> *)searchBlockingRequest_:(KmatrixCoreUserDirectorySearchRequest *)request __attribute__((swift_name("searchBlocking(request_:)")));
@end

__attribute__((swift_name("CoreVersionsResource")))
@protocol KmatrixCoreVersionsResource
@required

/**
 * GET /_matrix/client/versions
 * Gets the versions of the specification supported by the server.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVersionsWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreVersionsGetResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVersions(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreVersionsGetResponse *> *)getVersionsBlocking __attribute__((swift_name("getVersionsBlocking()")));
@end

__attribute__((swift_name("CoreVoIPResource")))
@protocol KmatrixCoreVoIPResource
@required

/**
 * GET /_matrix/client/v3/voip/turnServer
 * Get credentials for the client to use when initiating calls.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTurnServerWithCompletionHandler:(void (^)(KmatrixCoreResponse<KmatrixCoreVoIPGetTurnServerResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTurnServer(completionHandler:)")));
- (KmatrixCoreResponse<KmatrixCoreVoIPGetTurnServerResponse *> *)getTurnServerBlocking __attribute__((swift_name("getTurnServerBlocking()")));
@end


/**
 * An asynchronous data stream that sequentially emits values and completes normally or with an exception.
 *
 * _Intermediate operators_ on the flow such as [map], [filter], [take], [zip], etc are functions that are
 * applied to the _upstream_ flow or flows and return a _downstream_ flow where further operators can be applied to.
 * Intermediate operations do not execute any code in the flow and are not suspending functions themselves.
 * They only set up a chain of operations for future execution and quickly return.
 * This is known as a _cold flow_ property.
 *
 * _Terminal operators_ on the flow are either suspending functions such as [collect], [single], [reduce], [toList], etc.
 * or [launchIn] operator that starts collection of the flow in the given scope.
 * They are applied to the upstream flow and trigger execution of all operations.
 * Execution of the flow is also called _collecting the flow_  and is always performed in a suspending manner
 * without actual blocking. Terminal operators complete normally or exceptionally depending on successful or failed
 * execution of all the flow operations in the upstream. The most basic terminal operator is [collect], for example:
 *
 * ```
 * try {
 *     flow.collect { value ->
 *         println("Received $value")
 *     }
 * } catch (e: Exception) {
 *     println("The flow has thrown an exception: $e")
 * }
 * ```
 *
 * By default, flows are _sequential_ and all flow operations are executed sequentially in the same coroutine,
 * with an exception for a few operations specifically designed to introduce concurrency into flow
 * execution such as [buffer] and [flatMapMerge]. See their documentation for details.
 *
 * The `Flow` interface does not carry information whether a flow is a _cold_ stream that can be collected repeatedly and
 * triggers execution of the same code every time it is collected, or if it is a _hot_ stream that emits different
 * values from the same running source on each collection. Usually flows represent _cold_ streams, but
 * there is a [SharedFlow] subtype that represents _hot_ streams. In addition to that, any flow can be turned
 * into a _hot_ one by the [stateIn] and [shareIn] operators, or by converting the flow into a hot channel
 * via the [produceIn] operator.
 *
 * ### Flow builders
 *
 * There are the following basic ways to create a flow:
 *
 * - [flowOf(...)][flowOf] functions to create a flow from a fixed set of values.
 * - [asFlow()][asFlow] extension functions on various types to convert them into flows.
 * - [flow { ... }][flow] builder function to construct arbitrary flows from
 *   sequential calls to [emit][FlowCollector.emit] function.
 * - [channelFlow { ... }][channelFlow] builder function to construct arbitrary flows from
 *   potentially concurrent calls to the [send][kotlinx.coroutines.channels.SendChannel.send] function.
 * - [MutableStateFlow] and [MutableSharedFlow] define the corresponding constructor functions to create
 *   a _hot_ flow that can be directly updated.
 *
 * ### Flow constraints
 *
 * All implementations of the `Flow` interface must adhere to two key properties described in detail below:
 *
 * - Context preservation.
 * - Exception transparency.
 *
 * These properties ensure the ability to perform local reasoning about the code with flows and modularize the code
 * in such a way that upstream flow emitters can be developed separately from downstream flow collectors.
 * A user of a flow does not need to be aware of implementation details of the upstream flows it uses.
 *
 * ### Context preservation
 *
 * The flow has a context preservation property: it encapsulates its own execution context and never propagates or leaks
 * it downstream, thus making reasoning about the execution context of particular transformations or terminal
 * operations trivial.
 *
 * There is only one way to change the context of a flow: the [flowOn][Flow.flowOn] operator
 * that changes the upstream context ("everything above the `flowOn` operator").
 * For additional information refer to its documentation.
 *
 * This reasoning can be demonstrated in practice:
 *
 * ```
 * val flowA = flowOf(1, 2, 3)
 *     .map { it + 1 } // Will be executed in ctxA
 *     .flowOn(ctxA) // Changes the upstream context: flowOf and map
 *
 * // Now we have a context-preserving flow: it is executed somewhere but this information is encapsulated in the flow itself
 *
 * val filtered = flowA // ctxA is encapsulated in flowA
 *    .filter { it == 3 } // Pure operator without a context yet
 *
 * withContext(Dispatchers.Main) {
 *     // All non-encapsulated operators will be executed in Main: filter and single
 *     val result = filtered.single()
 *     myUi.text = result
 * }
 * ```
 *
 * From the implementation point of view, it means that all flow implementations should
 * only emit from the same coroutine context.
 * This constraint is efficiently enforced by the default [flow] builder.
 * The [flow] builder should be used if the flow implementation does not start any coroutines.
 * Its implementation prevents most of the development mistakes:
 *
 * ```
 * val myFlow = flow {
 *     // GlobalScope.launch { // is prohibited
 *     // launch(Dispatchers.IO) { // is prohibited
 *     // withContext(CoroutineName("myFlow")) { // is prohibited
 *     emit(1) // OK
 *     coroutineScope {
 *         emit(2) // OK -- still the same coroutine
 *     }
 * }
 * ```
 *
 * Use [channelFlow] if the collection and emission of a flow are to be separated into multiple coroutines.
 * It encapsulates all the context preservation work and allows you to focus on your
 * domain-specific problem, rather than invariant implementation details.
 * It is possible to use any combination of coroutine builders from within [channelFlow].
 *
 * If you are looking for performance and are sure that no concurrent emits and context jumps will happen,
 * the [flow] builder can be used alongside a [coroutineScope] or [supervisorScope] instead:
 * - Scoped primitive should be used to provide a [CoroutineScope].
 * - Changing the context of emission is prohibited, no matter whether it is `withContext(ctx)` or
 *   a builder argument (e.g. `launch(ctx)`).
 * - Collecting another flow from a separate context is allowed, but it has the same effect as
 *   applying the [flowOn] operator to that flow, which is more efficient.
 *
 * ### Exception transparency
 *
 * When `emit` or `emitAll` throws, the Flow implementations must immediately stop emitting new values and finish with an exception.
 * For diagnostics or application-specific purposes, the exception may be different from the one thrown by the emit operation,
 * suppressing the original exception as discussed below.
 * If there is a need to emit values after the downstream failed, please use the [catch][Flow.catch] operator.
 *
 * The [catch][Flow.catch] operator only catches upstream exceptions, but passes
 * all downstream exceptions. Similarly, terminal operators like [collect][Flow.collect]
 * throw any unhandled exceptions that occur in their code or in upstream flows, for example:
 *
 * ```
 * flow { emitData() }
 *     .map { computeOne(it) }
 *     .catch { ... } // catches exceptions in emitData and computeOne
 *     .map { computeTwo(it) }
 *     .collect { process(it) } // throws exceptions from process and computeTwo
 * ```
 * The same reasoning can be applied to the [onCompletion] operator that is a declarative replacement for the `finally` block.
 *
 * All exception-handling Flow operators follow the principle of exception suppression:
 *
 * If the upstream flow throws an exception during its completion when the downstream exception has been thrown,
 * the downstream exception becomes superseded and suppressed by the upstream exception, being a semantic
 * equivalent of throwing from `finally` block. However, this doesn't affect the operation of the exception-handling operators,
 * which consider the downstream exception to be the root cause and behave as if the upstream didn't throw anything.
 *
 * Failure to adhere to the exception transparency requirement can lead to strange behaviors which make
 * it hard to reason about the code because an exception in the `collect { ... }` could be somehow "caught"
 * by an upstream flow, limiting the ability of local reasoning about the code.
 *
 * Flow machinery enforces exception transparency at runtime and throws [IllegalStateException] on any attempt to emit a value,
 * if an exception has been thrown on previous attempt.
 *
 * ### Reactive streams
 *
 * Flow is [Reactive Streams](http://www.reactive-streams.org/) compliant, you can safely interop it with
 * reactive streams using `Flow.asPublisher` and `Publisher.asFlow` from `kotlinx-coroutines-reactive` module.
 *
 * ### Not stable for inheritance
 *
 * **The `Flow` interface is not stable for inheritance in 3rd party libraries**, as new methods
 * might be added to this interface in the future, but is stable for use.
 *
 * Use the `flow { ... }` builder function to create an implementation, or extend [AbstractFlow].
 * These implementations ensure that the context preservation property is not violated, and prevent most
 * of the developer mistakes related to concurrency, inconsistent flow dispatchers, and cancellation.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol KmatrixKotlinx_coroutines_coreFlow
@required

/**
 * Accepts the given [collector] and [emits][FlowCollector.emit] values into it.
 *
 * This method can be used along with SAM-conversion of [FlowCollector]:
 * ```
 * myFlow.collect { value -> println("Collected $value") }
 * ```
 *
 * ### Method inheritance
 *
 * To ensure the context preservation property, it is not recommended implementing this method directly.
 * Instead, [AbstractFlow] can be used as the base type to properly ensure flow's properties.
 *
 * All default flow implementations ensure context preservation and exception transparency properties on a best-effort basis
 * and throw [IllegalStateException] if a violation was detected.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KmatrixKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncRequest")))
@interface KmatrixCoreSyncRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** A filter ID or inline JSON filter to apply. */
@property NSString * _Nullable filter __attribute__((swift_name("filter")));

/** Controls whether to include the full state for all rooms. */
@property KmatrixBoolean * _Nullable fullState __attribute__((swift_name("fullState")));

/** Controls presence status: "offline" to not update presence. */
@property NSString * _Nullable setPresence __attribute__((swift_name("setPresence")));

/** A point in time to continue a sync from (the next_batch from a previous sync). */
@property NSString * _Nullable since __attribute__((swift_name("since")));

/** The maximum time to wait, in milliseconds, before returning this request. */
@property KmatrixInt * _Nullable timeout __attribute__((swift_name("timeout")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KmatrixKotlinThrowable : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KmatrixKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmatrixKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KmatrixKotlinException : KmatrixKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmatrixKotlinRuntimeException : KmatrixKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmatrixKotlinIllegalStateException : KmatrixKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KmatrixKotlinCancellationException : KmatrixKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountDataGetRequest")))
@interface KmatrixCoreAccountDataGetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KmatrixCoreResponse<T> : KmatrixBase
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable data __attribute__((swift_name("data")));
@property NSString * _Nullable json __attribute__((swift_name("json")));
@property KmatrixCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountDataSetRequest")))
@interface KmatrixCoreAccountDataSetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** JSON string of the account data content */
@property NSString * _Nullable data __attribute__((swift_name("data")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseUnit")))
@interface KmatrixCoreResponseUnit : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmatrixCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChangePasswordRequest")))
@interface KmatrixCoreChangePasswordRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable auth __attribute__((swift_name("auth")));
@property KmatrixBoolean * _Nullable logoutDevices __attribute__((swift_name("logoutDevices")));
@property KmatrixBoolean * _Nullable logoutDevicesAll __attribute__((swift_name("logoutDevicesAll")));
@property (getter=doNewPassword) NSString * _Nullable newPassword __attribute__((swift_name("newPassword")));
@property NSString * _Nullable session __attribute__((swift_name("session")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRegisterRequest")))
@interface KmatrixCoreRegisterRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable auth __attribute__((swift_name("auth")));
@property KmatrixBoolean * _Nullable bindEmail __attribute__((swift_name("bindEmail")));
@property NSString * _Nullable did __attribute__((swift_name("did")));
@property NSString * _Nullable initialDeviceDisplayName __attribute__((swift_name("initialDeviceDisplayName")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable session __attribute__((swift_name("session")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRegisterResponse")))
@interface KmatrixCoreRegisterResponse : KmatrixBase
- (instancetype)initWithAccessToken:(NSString *)accessToken homeServer:(NSString *)homeServer userId:(NSString *)userId deviceId:(NSString * _Nullable)deviceId defaultRooms:(KmatrixKotlinArray<NSString *> * _Nullable)defaultRooms nextChunkMs:(KmatrixLong * _Nullable)nextChunkMs deviceDisplayName:(NSString * _Nullable)deviceDisplayName wellKnown:(NSString * _Nullable)wellKnown __attribute__((swift_name("init(accessToken:homeServer:userId:deviceId:defaultRooms:nextChunkMs:deviceDisplayName:wellKnown:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixCoreRegisterResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property (readonly) NSString *accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="default_rooms")
*/
@property (readonly) KmatrixKotlinArray<NSString *> * _Nullable defaultRooms __attribute__((swift_name("defaultRooms")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_display_name")
*/
@property (readonly) NSString * _Nullable deviceDisplayName __attribute__((swift_name("deviceDisplayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_id")
*/
@property (readonly) NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="home_server")
*/
@property (readonly) NSString *homeServer __attribute__((swift_name("homeServer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_chunk_ms")
*/
@property (readonly) KmatrixLong * _Nullable nextChunkMs __attribute__((swift_name("nextChunkMs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_id")
*/
@property (readonly) NSString *userId __attribute__((swift_name("userId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="well_known")
*/
@property (readonly) NSString * _Nullable wellKnown __attribute__((swift_name("wellKnown")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsWhoamiResponse")))
@interface KmatrixCoreAccountsWhoamiResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreAccountsWhoamiResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_id")
*/
@property NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_guest")
*/
@property BOOL isGuest __attribute__((swift_name("isGuest")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_id")
*/
@property NSString *userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse")))
@interface KmatrixCoreCapabilitiesGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreCapabilitiesGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="capabilities")
*/
@property KmatrixCoreCapabilitiesGetResponseCapabilities *capabilities __attribute__((swift_name("capabilities")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevicesDeleteRequest")))
@interface KmatrixCoreDevicesDeleteRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevicesGetDeviceResponse")))
@interface KmatrixCoreDevicesGetDeviceResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreDevicesGetDeviceResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_id")
*/
@property NSString *deviceId __attribute__((swift_name("deviceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_seen_ip")
*/
@property NSString * _Nullable lastSeenIp __attribute__((swift_name("lastSeenIp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_seen_ts")
*/
@property KmatrixLong * _Nullable lastSeenTs __attribute__((swift_name("lastSeenTs")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevicesGetResponse")))
@interface KmatrixCoreDevicesGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreDevicesGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="devices")
*/
@property KmatrixKotlinArray<KmatrixCoreDevice *> *devices __attribute__((swift_name("devices")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevicesUpdateRequest")))
@interface KmatrixCoreDevicesUpdateRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable deviceId __attribute__((swift_name("deviceId")));

/** A display name to set for the device. */
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDirectoryGetPublicRoomsRequest")))
@interface KmatrixCoreDirectoryGetPublicRoomsRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Maximum number of results to return. */
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));

/** The server to fetch the public room lists from. */
@property NSString * _Nullable server __attribute__((swift_name("server")));

/** A pagination token from a previous request. */
@property NSString * _Nullable since __attribute__((swift_name("since")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDirectoryGetPublicRoomsResponse")))
@interface KmatrixCoreDirectoryGetPublicRoomsResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreDirectoryGetPublicRoomsResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chunk")
*/
@property KmatrixKotlinArray<KmatrixCorePublicRoomChunk *> *chunk __attribute__((swift_name("chunk")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_batch")
*/
@property NSString * _Nullable nextBatch __attribute__((swift_name("nextBatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prev_batch")
*/
@property NSString * _Nullable prevBatch __attribute__((swift_name("prevBatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_room_count_estimate")
*/
@property KmatrixLong * _Nullable totalRoomCountEstimate __attribute__((swift_name("totalRoomCountEstimate")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDirectoryResolveAliasResponse")))
@interface KmatrixCoreDirectoryResolveAliasResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreDirectoryResolveAliasResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString *roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="servers")
*/
@property KmatrixKotlinArray<NSString *> *servers __attribute__((swift_name("servers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDirectorySetAliasRequest")))
@interface KmatrixCoreDirectorySetAliasRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The room alias to set (e.g., "#alias:example.com"). */
@property NSString * _Nullable roomAlias __attribute__((swift_name("roomAlias")));

/** The room ID to set the alias for. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventsGetContextRequest")))
@interface KmatrixCoreEventsGetContextRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable eventId __attribute__((swift_name("eventId")));
@property NSString * _Nullable filter __attribute__((swift_name("filter")));
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventsGetContextResponse")))
@interface KmatrixCoreEventsGetContextResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreEventsGetContextResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="end")
*/
@property NSString * _Nullable end __attribute__((swift_name("end")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event")
*/
@property KmatrixCoreEventsGetContextResponseContextEvent * _Nullable event __attribute__((swift_name("event")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events_after")
*/
@property KmatrixKotlinArray<KmatrixCoreEventsGetContextResponseContextEvent *> *eventsAfter __attribute__((swift_name("eventsAfter")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events_before")
*/
@property KmatrixKotlinArray<KmatrixCoreEventsGetContextResponseContextEvent *> *eventsBefore __attribute__((swift_name("eventsBefore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="start")
*/
@property NSString * _Nullable start __attribute__((swift_name("start")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property KmatrixKotlinArray<KmatrixCoreEventsGetContextResponseContextEvent *> *state __attribute__((swift_name("state")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventsGetEventResponse")))
@interface KmatrixCoreEventsGetEventResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreEventsGetEventResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property int64_t originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString *roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString *sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state_key")
*/
@property NSString * _Nullable stateKey __attribute__((swift_name("stateKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unsigned")
*/
@property (getter=unsigned, setter=setUnsigned:) NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> * _Nullable unsigned_ __attribute__((swift_name("unsigned_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterCreateRequest")))
@interface KmatrixCoreFilterCreateRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** List of event types to include. */
@property KmatrixKotlinArray<NSString *> * _Nullable eventTypes __attribute__((swift_name("eventTypes")));

/** Include rooms the user has left. */
@property KmatrixBoolean * _Nullable includeLeave __attribute__((swift_name("includeLeave")));

/** Maximum number of events to return. */
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));

/** List of event types to exclude. */
@property KmatrixKotlinArray<NSString *> * _Nullable notEventTypes __attribute__((swift_name("notEventTypes")));

/** List of room IDs to exclude. */
@property KmatrixKotlinArray<NSString *> * _Nullable notRooms __attribute__((swift_name("notRooms")));

/** List of sender IDs to exclude. */
@property KmatrixKotlinArray<NSString *> * _Nullable notSenders __attribute__((swift_name("notSenders")));

/** List of room IDs to include. */
@property KmatrixKotlinArray<NSString *> * _Nullable rooms __attribute__((swift_name("rooms")));

/** List of sender IDs to include. */
@property KmatrixKotlinArray<NSString *> * _Nullable senders __attribute__((swift_name("senders")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterCreateResponse")))
@interface KmatrixCoreFilterCreateResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreFilterCreateResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="filter_id")
*/
@property NSString *filterId __attribute__((swift_name("filterId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDeleteFilterRequest")))
@interface KmatrixCoreDeleteFilterRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable filterId __attribute__((swift_name("filterId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterGetRequest")))
@interface KmatrixCoreFilterGetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable filterId __attribute__((swift_name("filterId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterGetResponse")))
@interface KmatrixCoreFilterGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreFilterGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_data")
*/
@property KmatrixCoreEventFilter * _Nullable accountData __attribute__((swift_name("accountData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_fields")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable eventFields __attribute__((swift_name("eventFields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_format")
*/
@property NSString * _Nullable eventFormat __attribute__((swift_name("eventFormat")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="presence")
*/
@property KmatrixCoreEventFilter * _Nullable presence __attribute__((swift_name("presence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room")
*/
@property KmatrixCoreRoomFilter * _Nullable room __attribute__((swift_name("room")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginGetLoginFlowsResponse")))
@interface KmatrixCoreLoginGetLoginFlowsResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreLoginGetLoginFlowsResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="flows")
*/
@property KmatrixKotlinArray<KmatrixCoreLoginFlow *> *flows __attribute__((swift_name("flows")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginPasswordRequest")))
@interface KmatrixCoreLoginPasswordRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Optional device display name */
@property NSString * _Nullable initialDeviceDisplayName __attribute__((swift_name("initialDeviceDisplayName")));
@property NSString * _Nullable password __attribute__((swift_name("password")));

/** User ID (e.g. @user:matrix.org) or just the localpart (e.g. user) */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginPasswordResponse")))
@interface KmatrixCoreLoginPasswordResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreLoginPasswordResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property NSString *accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_id")
*/
@property NSString *deviceId __attribute__((swift_name("deviceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="home_server")
*/
@property NSString * _Nullable homeServer __attribute__((swift_name("homeServer")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_id")
*/
@property NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginSsoRedirectRequest")))
@interface KmatrixCoreLoginSsoRedirectRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The URL to redirect to after SSO authentication */
@property NSString * _Nullable redirectUrl __attribute__((swift_name("redirectUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaDownloadRequest")))
@interface KmatrixCoreMediaDownloadRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Whether to allow remote media downloads. */
@property KmatrixBoolean * _Nullable allowRemote __attribute__((swift_name("allowRemote")));

/** The media ID from the mxc:// URI. */
@property NSString * _Nullable mediaId __attribute__((swift_name("mediaId")));

/** The server name from the mxc:// URI. */
@property NSString * _Nullable serverName __attribute__((swift_name("serverName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmatrixKotlinByteArray : KmatrixBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmatrixByte *(^)(KmatrixInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmatrixKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaGetConfigResponse")))
@interface KmatrixCoreMediaGetConfigResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreMediaGetConfigResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.upload.size")
*/
@property KmatrixLong * _Nullable uploadSize __attribute__((swift_name("uploadSize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaPreviewUrlRequest")))
@interface KmatrixCoreMediaPreviewUrlRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The preferred point in time to return a preview for.
 *  The server may return a newer version if it does not have
 *  the requested version available. Timestamp in milliseconds. */
@property KmatrixLong * _Nullable ts __attribute__((swift_name("ts")));

/** The URL to get a preview of. */
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaPreviewUrlResponse")))
@interface KmatrixCoreMediaPreviewUrlResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreMediaPreviewUrlResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="matrix:image:size")
*/
@property KmatrixLong * _Nullable matrixImageSize __attribute__((swift_name("matrixImageSize")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:description")
*/
@property NSString * _Nullable ogDescription __attribute__((swift_name("ogDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:image")
*/
@property NSString * _Nullable ogImage __attribute__((swift_name("ogImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:image:height")
*/
@property KmatrixInt * _Nullable ogImageHeight __attribute__((swift_name("ogImageHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:image:type")
*/
@property NSString * _Nullable ogImageType __attribute__((swift_name("ogImageType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:image:width")
*/
@property KmatrixInt * _Nullable ogImageWidth __attribute__((swift_name("ogImageWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:site_name")
*/
@property NSString * _Nullable ogSiteName __attribute__((swift_name("ogSiteName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:title")
*/
@property NSString * _Nullable ogTitle __attribute__((swift_name("ogTitle")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:type")
*/
@property NSString * _Nullable ogType __attribute__((swift_name("ogType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="og:url")
*/
@property NSString * _Nullable ogUrl __attribute__((swift_name("ogUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaThumbnailRequest")))
@interface KmatrixCoreMediaThumbnailRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The desired height of the thumbnail in pixels. */
@property KmatrixInt * _Nullable height __attribute__((swift_name("height")));

/** The media ID from the mxc:// URI. */
@property NSString * _Nullable mediaId __attribute__((swift_name("mediaId")));

/** The desired resizing method. One of: "crop", "scale". */
@property NSString * _Nullable method __attribute__((swift_name("method")));

/** The server name from the mxc:// URI. */
@property NSString * _Nullable serverName __attribute__((swift_name("serverName")));

/** The desired width of the thumbnail in pixels. */
@property KmatrixInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaUploadRequest")))
@interface KmatrixCoreMediaUploadRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The raw bytes of the file to upload. */
@property KmatrixKotlinByteArray * _Nullable bytes __attribute__((swift_name("bytes")));

/** The content type of the file (e.g., "image/png"). */
@property NSString * _Nullable contentType __attribute__((swift_name("contentType")));

/** The file name to give to the media. */
@property NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaUploadResponse")))
@interface KmatrixCoreMediaUploadResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreMediaUploadResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content_uri")
*/
@property NSString *contentUri __attribute__((swift_name("contentUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsGetRequest")))
@interface KmatrixCoreNotificationsGetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable from __attribute__((swift_name("from")));
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable only __attribute__((swift_name("only")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsGetResponse")))
@interface KmatrixCoreNotificationsGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreNotificationsGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_token")
*/
@property NSString * _Nullable nextToken __attribute__((swift_name("nextToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notifications")
*/
@property KmatrixKotlinArray<KmatrixCoreNotificationsGetResponseNotification *> *notifications __attribute__((swift_name("notifications")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePresenceGetResponse")))
@interface KmatrixCorePresenceGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePresenceGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currently_active")
*/
@property KmatrixBoolean * _Nullable currentlyActive __attribute__((swift_name("currentlyActive")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_active_ago")
*/
@property KmatrixLong * _Nullable lastActiveAgo __attribute__((swift_name("lastActiveAgo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="presence")
*/
@property NSString *presence __attribute__((swift_name("presence")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_msg")
*/
@property NSString * _Nullable statusMsg __attribute__((swift_name("statusMsg")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePresenceSetRequest")))
@interface KmatrixCorePresenceSetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Required. The new presence state. One of: "online", "offline", "unavailable". */
@property NSString * _Nullable presence __attribute__((swift_name("presence")));

/** The status message to attach to this state. */
@property NSString * _Nullable statusMsg __attribute__((swift_name("statusMsg")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileGetAvatarUrlResponse")))
@interface KmatrixCoreProfileGetAvatarUrlResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreProfileGetAvatarUrlResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_url")
*/
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileGetDisplayNameResponse")))
@interface KmatrixCoreProfileGetDisplayNameResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreProfileGetDisplayNameResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="displayname")
*/
@property NSString * _Nullable displayname __attribute__((swift_name("displayname")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileGetProfileResponse")))
@interface KmatrixCoreProfileGetProfileResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreProfileGetProfileResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_url")
*/
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="displayname")
*/
@property NSString * _Nullable displayname __attribute__((swift_name("displayname")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileSetAvatarUrlRequest")))
@interface KmatrixCoreProfileSetAvatarUrlRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileSetDisplayNameRequest")))
@interface KmatrixCoreProfileSetDisplayNameRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable displayname __attribute__((swift_name("displayname")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRulesCreateRequest")))
@interface KmatrixCorePushRulesCreateRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Actions to execute when the rule matches. */
@property NSString * _Nullable actions __attribute__((swift_name("actions")));

/** The conditions for the rule. */
@property NSString * _Nullable conditions __attribute__((swift_name("conditions")));

/** Whether the push rule is enabled or not. */
@property KmatrixBoolean * _Nullable enabled __attribute__((swift_name("enabled")));

/** The kind of rule. One of: "override", "underride", "sender", "room", "content". */
@property NSString * _Nullable kind __attribute__((swift_name("kind")));

/** The body of the rule as a JSON string containing all rule properties. */
@property NSString * _Nullable ruleBody __attribute__((swift_name("ruleBody")));

/** The identifier for the rule. */
@property NSString * _Nullable ruleId __attribute__((swift_name("ruleId")));

/** The scope to modify. Usually "global". */
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRulesDeleteRequest")))
@interface KmatrixCorePushRulesDeleteRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The kind of rule. One of: "override", "underride", "sender", "room", "content". */
@property NSString * _Nullable kind __attribute__((swift_name("kind")));

/** The identifier for the rule. */
@property NSString * _Nullable ruleId __attribute__((swift_name("ruleId")));

/** The scope to delete from. Usually "global". */
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRulesGetEnabledResponse")))
@interface KmatrixCorePushRulesGetEnabledResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushRulesGetEnabledResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRulesGetResponse")))
@interface KmatrixCorePushRulesGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushRulesGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="global")
*/
@property KmatrixCorePushRuleset * _Nullable global __attribute__((swift_name("global")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRulesSetEnabledRequest")))
@interface KmatrixCorePushRulesSetEnabledRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** Whether the push rule is enabled or not. */
@property KmatrixBoolean * _Nullable enabled __attribute__((swift_name("enabled")));

/** The kind of rule. One of: "override", "underride", "sender", "room", "content". */
@property NSString * _Nullable kind __attribute__((swift_name("kind")));

/** The identifier for the rule. */
@property NSString * _Nullable ruleId __attribute__((swift_name("ruleId")));

/** The scope to modify. Usually "global". */
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushersGetResponse")))
@interface KmatrixCorePushersGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushersGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pushers")
*/
@property KmatrixKotlinArray<KmatrixCorePushersGetResponsePusher *> *pushers __attribute__((swift_name("pushers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushersSetRequest")))
@interface KmatrixCorePushersSetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** A human readable string for the application name. */
@property NSString * _Nullable appDisplayName __attribute__((swift_name("appDisplayName")));

/** The application ID (reverse DNS style, e.g., "com.example.app"). */
@property NSString * _Nullable appId __attribute__((swift_name("appId")));

/** If true, the server should add another pusher instead of replacing existing ones. */
@property KmatrixBoolean * _Nullable append __attribute__((swift_name("append")));

/** A dictionary of data for the pusher. For "http" kind, must contain "url". */
@property KmatrixCorePusherData * _Nullable data __attribute__((swift_name("data")));

/** A human readable string for the device name. */
@property NSString * _Nullable deviceDisplayName __attribute__((swift_name("deviceDisplayName")));

/** Whether the pusher should actively create push notifications. */
@property KmatrixBoolean * _Nullable enabled __attribute__((swift_name("enabled")));

/** The kind of pusher. "http" is a pusher that sends HTTP pokes. "email" sends email notifications. Use null to delete. */
@property NSString * _Nullable kind __attribute__((swift_name("kind")));

/** The preferred language for receiving notifications (ISO 639, e.g., "en"). */
@property NSString * _Nullable lang __attribute__((swift_name("lang")));

/** Identifies which set of device specific rules this pusher executes. */
@property NSString * _Nullable profileTag __attribute__((swift_name("profileTag")));

/** The pushkey for this pusher (e.g., email address or push token). */
@property NSString * _Nullable pushkey __attribute__((swift_name("pushkey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationsGetRequest")))
@interface KmatrixCoreRelationsGetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable dir __attribute__((swift_name("dir")));
@property NSString * _Nullable eventId __attribute__((swift_name("eventId")));

/** Optional event type filter (e.g. "m.reaction") */
@property NSString * _Nullable eventType __attribute__((swift_name("eventType")));
@property NSString * _Nullable from __attribute__((swift_name("from")));
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));

/** Optional relation type filter (e.g. "m.annotation", "m.thread") */
@property NSString * _Nullable relType __attribute__((swift_name("relType")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable to __attribute__((swift_name("to")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationsGetResponse")))
@interface KmatrixCoreRelationsGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRelationsGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chunk")
*/
@property KmatrixKotlinArray<KmatrixCoreRelationsGetResponseRelationEvent *> *chunk __attribute__((swift_name("chunk")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_batch")
*/
@property NSString * _Nullable nextBatch __attribute__((swift_name("nextBatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prev_batch")
*/
@property NSString * _Nullable prevBatch __attribute__((swift_name("prevBatch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreThreadsGetRequest")))
@interface KmatrixCoreThreadsGetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable from __attribute__((swift_name("from")));
@property NSString * _Nullable include __attribute__((swift_name("include")));
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreThreadsGetResponse")))
@interface KmatrixCoreThreadsGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreThreadsGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chunk")
*/
@property KmatrixKotlinArray<KmatrixCoreThreadsGetResponseThreadEvent *> *chunk __attribute__((swift_name("chunk")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_batch")
*/
@property NSString * _Nullable nextBatch __attribute__((swift_name("nextBatch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsBanRequest")))
@interface KmatrixCoreRoomsBanRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable reason __attribute__((swift_name("reason")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsCreateRoomRequest")))
@interface KmatrixCoreRoomsCreateRoomRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** A list of user IDs to invite to the room. */
@property KmatrixKotlinArray<NSString *> * _Nullable invite __attribute__((swift_name("invite")));

/** Whether all members of the room (not combinated with public join_rules) should be invited. */
@property KmatrixBoolean * _Nullable isDirect __attribute__((swift_name("isDirect")));

/** The room name. */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Convenience parameter for setting room preset: private_chat, public_chat, trusted_private_chat */
@property NSString * _Nullable preset __attribute__((swift_name("preset")));

/** The desired room alias local part. */
@property NSString * _Nullable roomAliasName __attribute__((swift_name("roomAliasName")));

/** The room topic. */
@property NSString * _Nullable topic __attribute__((swift_name("topic")));

/** A public visibility means that the room will be shown in the published room list. */
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsCreateRoomResponse")))
@interface KmatrixCoreRoomsCreateRoomResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsCreateRoomResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString *roomId __attribute__((swift_name("roomId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsForgetRoomRequest")))
@interface KmatrixCoreRoomsForgetRoomRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetJoinedMembersResponse")))
@interface KmatrixCoreRoomsGetJoinedMembersResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsGetJoinedMembersResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="joined")
*/
@property NSDictionary<NSString *, KmatrixCoreRoomMember *> *joined __attribute__((swift_name("joined")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetJoinedRoomsResponse")))
@interface KmatrixCoreRoomsGetJoinedRoomsResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsGetJoinedRoomsResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="joined_rooms")
*/
@property KmatrixKotlinArray<NSString *> *joinedRooms __attribute__((swift_name("joinedRooms")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetMembersResponse")))
@interface KmatrixCoreRoomsGetMembersResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsGetMembersResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chunk")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> *chunk __attribute__((swift_name("chunk")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetMessagesRequest")))
@interface KmatrixCoreRoomsGetMessagesRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The direction to return events from: "b" (backwards) or "f" (forwards). */
@property NSString * _Nullable dir __attribute__((swift_name("dir")));

/** A JSON RoomEventFilter to filter returned events with. */
@property NSString * _Nullable filter __attribute__((swift_name("filter")));

/** The token to start returning events from (pagination token from a previous response). */
@property NSString * _Nullable from __attribute__((swift_name("from")));

/** The maximum number of events to return. */
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));

/** The room ID to get messages from. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/** The token to stop returning events at. */
@property NSString * _Nullable to __attribute__((swift_name("to")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetMessagesResponse")))
@interface KmatrixCoreRoomsGetMessagesResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsGetMessagesResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chunk")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> *chunk __attribute__((swift_name("chunk")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="end")
*/
@property NSString * _Nullable end __attribute__((swift_name("end")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="start")
*/
@property NSString *start __attribute__((swift_name("start")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> * _Nullable state __attribute__((swift_name("state")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetRoomNameResponse")))
@interface KmatrixCoreRoomsGetRoomNameResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsGetRoomNameResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsStateEvent")))
@interface KmatrixCoreRoomsStateEvent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsStateEventCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property int64_t originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString *sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state_key")
*/
@property NSString *stateKey __attribute__((swift_name("stateKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmatrixKotlinArray<T> : KmatrixBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmatrixInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmatrixKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsInviteRequest")))
@interface KmatrixCoreRoomsInviteRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The reason the invitation was sent. */
@property NSString * _Nullable reason __attribute__((swift_name("reason")));

/** The room ID to which to invite the user. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/** The fully qualified user ID of the invitee. */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsJoinRoomRequest")))
@interface KmatrixCoreRoomsJoinRoomRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The reason the user is joining the room. */
@property NSString * _Nullable reason __attribute__((swift_name("reason")));

/** The room ID or room alias to join. */
@property NSString * _Nullable roomIdOrAlias __attribute__((swift_name("roomIdOrAlias")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsJoinRoomResponse")))
@interface KmatrixCoreRoomsJoinRoomResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsJoinRoomResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString *roomId __attribute__((swift_name("roomId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsKickRequest")))
@interface KmatrixCoreRoomsKickRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable reason __attribute__((swift_name("reason")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsLeaveRoomRequest")))
@interface KmatrixCoreRoomsLeaveRoomRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The reason the user is leaving the room. */
@property NSString * _Nullable reason __attribute__((swift_name("reason")));

/** The room ID to leave. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsRedactEventRequest")))
@interface KmatrixCoreRoomsRedactEventRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The event ID to redact. */
@property NSString * _Nullable eventId __attribute__((swift_name("eventId")));

/** The reason for the event being redacted. */
@property NSString * _Nullable reason __attribute__((swift_name("reason")));

/** The room ID of the event to redact. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsRedactEventResponse")))
@interface KmatrixCoreRoomsRedactEventResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsRedactEventResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendMessageRequest")))
@interface KmatrixCoreRoomsSendMessageRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property KmatrixLong * _Nullable duration __attribute__((swift_name("duration")));
@property NSString * _Nullable filename __attribute__((swift_name("filename")));
@property NSString * _Nullable geoUri __attribute__((swift_name("geoUri")));
@property KmatrixLong * _Nullable height __attribute__((swift_name("height")));
@property NSString * _Nullable mimetype __attribute__((swift_name("mimetype")));
@property NSString * _Nullable msgtype __attribute__((swift_name("msgtype")));
@property NSString * _Nullable relatesToEventId __attribute__((swift_name("relatesToEventId")));
@property NSString * _Nullable relatesToKey __attribute__((swift_name("relatesToKey")));
@property NSString * _Nullable relatesToRelType __attribute__((swift_name("relatesToRelType")));
@property NSString * _Nullable relatesToType __attribute__((swift_name("relatesToType")));
@property NSString * _Nullable replyTo __attribute__((swift_name("replyTo")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable thumbnailMimetype __attribute__((swift_name("thumbnailMimetype")));
@property KmatrixLong * _Nullable thumbnailSize __attribute__((swift_name("thumbnailSize")));
@property NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property KmatrixLong * _Nullable width __attribute__((swift_name("width")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendMessageResponse")))
@interface KmatrixCoreRoomsSendMessageResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsSendMessageResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendReactionRequest")))
@interface KmatrixCoreRoomsSendReactionRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable eventId __attribute__((swift_name("eventId")));
@property NSString * _Nullable key __attribute__((swift_name("key")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendReceiptRequest")))
@interface KmatrixCoreRoomsSendReceiptRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The event ID to acknowledge up to. */
@property NSString * _Nullable eventId __attribute__((swift_name("eventId")));

/** The type of receipt to send: "m.read", "m.read.private", "m.fully_read". */
@property NSString * _Nullable receiptType __attribute__((swift_name("receiptType")));

/** The room ID in which to send the receipt. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/** The thread ID, if applicable. "main" for main timeline. */
@property NSString * _Nullable threadId __attribute__((swift_name("threadId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendStateEventRequest")))
@interface KmatrixCoreRoomsSendStateEventRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The JSON body content of the state event. */
@property NSString * _Nullable body __attribute__((swift_name("body")));

/** The type of state event to send (e.g., "m.room.name", "m.room.topic"). */
@property NSString * _Nullable eventType __attribute__((swift_name("eventType")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/** The state key. Defaults to empty string. */
@property NSString * _Nullable stateKey __attribute__((swift_name("stateKey")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendStateEventResponse")))
@interface KmatrixCoreRoomsSendStateEventResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomsSendStateEventResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSetReadMarkersRequest")))
@interface KmatrixCoreRoomsSetReadMarkersRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The event ID the read marker should be located at (fully read position). */
@property NSString * _Nullable fullyRead __attribute__((swift_name("fullyRead")));

/** The event ID to set the read receipt location at. */
@property NSString * _Nullable read __attribute__((swift_name("read")));

/** The event ID to set the private read receipt location at. */
@property NSString * _Nullable readPrivate __attribute__((swift_name("readPrivate")));

/** The room ID in which to set the read markers. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsTypingRequest")))
@interface KmatrixCoreRoomsTypingRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The room ID to set typing notification in. */
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/** The length of time in milliseconds to mark this user as typing. */
@property KmatrixInt * _Nullable timeout __attribute__((swift_name("timeout")));

/** Whether the user is typing. */
@property KmatrixBoolean * _Nullable typing __attribute__((swift_name("typing")));

/** The user ID to set typing notification for. */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsUnbanRequest")))
@interface KmatrixCoreRoomsUnbanRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable reason __attribute__((swift_name("reason")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchRequest")))
@interface KmatrixCoreSearchRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The keys to search (e.g., "content.body", "content.name", "content.topic"). */
@property KmatrixKotlinArray<NSString *> * _Nullable keys __attribute__((swift_name("keys")));

/** A pagination token from a previous search. */
@property NSString * _Nullable nextBatch __attribute__((swift_name("nextBatch")));

/** The order to list results in. One of: "recent", "rank". */
@property NSString * _Nullable orderBy __attribute__((swift_name("orderBy")));

/** Limit the results to the given room IDs. */
@property KmatrixKotlinArray<NSString *> * _Nullable roomIds __attribute__((swift_name("roomIds")));

/** The search term to search for. */
@property NSString * _Nullable searchTerm __attribute__((swift_name("searchTerm")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResponse")))
@interface KmatrixCoreSearchResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSearchResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="search_categories")
*/
@property KmatrixCoreSearchCategories * _Nullable searchCategories __attribute__((swift_name("searchCategories")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncResponse")))
@interface KmatrixCoreSyncResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_data")
*/
@property KmatrixCoreSyncAccountData * _Nullable accountData __attribute__((swift_name("accountData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_batch")
*/
@property NSString *nextBatch __attribute__((swift_name("nextBatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rooms")
*/
@property KmatrixCoreSyncRooms * _Nullable rooms __attribute__((swift_name("rooms")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTagsDeleteRequest")))
@interface KmatrixCoreTagsDeleteRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTagsGetResponse")))
@interface KmatrixCoreTagsGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreTagsGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property NSDictionary<NSString *, KmatrixCoreTagContent *> *tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTagsSetRequest")))
@interface KmatrixCoreTagsSetRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** A number in a range [0,1] describing a relative position of the room. */
@property KmatrixDouble * _Nullable order __attribute__((swift_name("order")));
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/** The tag to add (e.g., "m.favourite", "m.lowpriority", or custom). */
@property NSString * _Nullable tag __attribute__((swift_name("tag")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDirectorySearchRequest")))
@interface KmatrixCoreUserDirectorySearchRequest : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The maximum number of results to return. */
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));

/** The term to search for. */
@property NSString * _Nullable searchTerm __attribute__((swift_name("searchTerm")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDirectorySearchResponse")))
@interface KmatrixCoreUserDirectorySearchResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreUserDirectorySearchResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="limited")
*/
@property BOOL limited __attribute__((swift_name("limited")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="results")
*/
@property KmatrixKotlinArray<KmatrixCoreUserDirectoryUser *> *results __attribute__((swift_name("results")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVersionsGetResponse")))
@interface KmatrixCoreVersionsGetResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreVersionsGetResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unstable_features")
*/
@property NSDictionary<NSString *, KmatrixBoolean *> * _Nullable unstableFeatures __attribute__((swift_name("unstableFeatures")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="versions")
*/
@property KmatrixKotlinArray<NSString *> *versions __attribute__((swift_name("versions")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVoIPGetTurnServerResponse")))
@interface KmatrixCoreVoIPGetTurnServerResponse : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreVoIPGetTurnServerResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="password")
*/
@property NSString *password __attribute__((swift_name("password")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ttl")
*/
@property int32_t ttl __attribute__((swift_name("ttl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uris")
*/
@property KmatrixKotlinArray<NSString *> *uris __attribute__((swift_name("uris")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property NSString *username __attribute__((swift_name("username")));
@end


/**
 * [FlowCollector] is used as an intermediate or a terminal collector of the flow and represents
 * an entity that accepts values emitted by the [Flow].
 *
 * This interface should usually not be implemented directly, but rather used as a receiver in a [flow] builder when implementing a custom operator,
 * or with SAM-conversion.
 * Implementations of this interface are not thread-safe.
 *
 * Example of usage:
 *
 * ```
 * val flow = getMyEvents()
 * try {
 *     flow.collect { value ->
 *         println("Received $value")
 *     }
 *     println("My events are consumed successfully")
 * } catch (e: Throwable) {
 *     println("Exception from the flow: $e")
 * }
 * ```
 */
__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol KmatrixKotlinx_coroutines_coreFlowCollector
@required

/**
 * Collects the value emitted by the upstream.
 * This method is not thread-safe and should not be invoked concurrently.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit")))
@interface KmatrixCoreRateLimit : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRateLimitCompanion *companion __attribute__((swift_name("companion")));
@property int32_t limit __attribute__((swift_name("limit")));
@property int32_t remaining __attribute__((swift_name("remaining")));
@property KmatrixKotlinInstant * _Nullable reset __attribute__((swift_name("reset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRegisterResponse.Companion")))
@interface KmatrixCoreRegisterResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRegisterResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsWhoamiResponse.Companion")))
@interface KmatrixCoreAccountsWhoamiResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreAccountsWhoamiResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.Companion")))
@interface KmatrixCoreCapabilitiesGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreCapabilitiesGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.Capabilities")))
@interface KmatrixCoreCapabilitiesGetResponseCapabilities : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreCapabilitiesGetResponseCapabilitiesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.change_password")
*/
@property KmatrixCoreCapabilitiesGetResponseChangePassword * _Nullable changePassword __attribute__((swift_name("changePassword")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.room_versions")
*/
@property KmatrixCoreCapabilitiesGetResponseRoomVersions * _Nullable roomVersions __attribute__((swift_name("roomVersions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.set_avatar_url")
*/
@property KmatrixCoreCapabilitiesGetResponseBooleanCapability * _Nullable setAvatarUrl __attribute__((swift_name("setAvatarUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.set_displayname")
*/
@property KmatrixCoreCapabilitiesGetResponseBooleanCapability * _Nullable setDisplayname __attribute__((swift_name("setDisplayname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.3pid_changes")
*/
@property KmatrixCoreCapabilitiesGetResponseBooleanCapability * _Nullable thirdPartyIdChanges __attribute__((swift_name("thirdPartyIdChanges")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevicesGetDeviceResponse.Companion")))
@interface KmatrixCoreDevicesGetDeviceResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreDevicesGetDeviceResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevicesGetResponse.Companion")))
@interface KmatrixCoreDevicesGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreDevicesGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevice")))
@interface KmatrixCoreDevice : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreDeviceCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_id")
*/
@property NSString *deviceId __attribute__((swift_name("deviceId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_seen_ip")
*/
@property NSString * _Nullable lastSeenIp __attribute__((swift_name("lastSeenIp")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_seen_ts")
*/
@property KmatrixLong * _Nullable lastSeenTs __attribute__((swift_name("lastSeenTs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDirectoryGetPublicRoomsResponse.Companion")))
@interface KmatrixCoreDirectoryGetPublicRoomsResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreDirectoryGetPublicRoomsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePublicRoomChunk")))
@interface KmatrixCorePublicRoomChunk : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePublicRoomChunkCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="aliases")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable aliases __attribute__((swift_name("aliases")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_url")
*/
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="canonical_alias")
*/
@property NSString * _Nullable canonicalAlias __attribute__((swift_name("canonicalAlias")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="guest_can_join")
*/
@property BOOL guestCanJoin __attribute__((swift_name("guestCanJoin")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="join_rule")
*/
@property NSString * _Nullable joinRule __attribute__((swift_name("joinRule")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="num_joined_members")
*/
@property int64_t numJoinedMembers __attribute__((swift_name("numJoinedMembers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString *roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="topic")
*/
@property NSString * _Nullable topic __attribute__((swift_name("topic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="world_readable")
*/
@property BOOL worldReadable __attribute__((swift_name("worldReadable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDirectoryResolveAliasResponse.Companion")))
@interface KmatrixCoreDirectoryResolveAliasResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreDirectoryResolveAliasResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventsGetContextResponse.Companion")))
@interface KmatrixCoreEventsGetContextResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreEventsGetContextResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventsGetContextResponse.ContextEvent")))
@interface KmatrixCoreEventsGetContextResponseContextEvent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreEventsGetContextResponseContextEventCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property int64_t originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString *sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state_key")
*/
@property NSString * _Nullable stateKey __attribute__((swift_name("stateKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventsGetEventResponse.Companion")))
@interface KmatrixCoreEventsGetEventResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreEventsGetEventResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KmatrixKotlinx_serialization_jsonJsonElement : KmatrixBase
@property (class, readonly, getter=companion) KmatrixKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterCreateResponse.Companion")))
@interface KmatrixCoreFilterCreateResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreFilterCreateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterGetResponse.Companion")))
@interface KmatrixCoreFilterGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreFilterGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventFilter")))
@interface KmatrixCoreEventFilter : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreEventFilterCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="limit")
*/
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="not_senders")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable notSenders __attribute__((swift_name("notSenders")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="not_types")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable notTypes __attribute__((swift_name("notTypes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="senders")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable senders __attribute__((swift_name("senders")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="types")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable types __attribute__((swift_name("types")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomFilter")))
@interface KmatrixCoreRoomFilter : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomFilterCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_data")
*/
@property KmatrixCoreRoomEventFilter * _Nullable accountData __attribute__((swift_name("accountData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ephemeral")
*/
@property KmatrixCoreRoomEventFilter * _Nullable ephemeral __attribute__((swift_name("ephemeral")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="include_leave")
*/
@property KmatrixBoolean * _Nullable includeLeave __attribute__((swift_name("includeLeave")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="not_rooms")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable notRooms __attribute__((swift_name("notRooms")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rooms")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable rooms __attribute__((swift_name("rooms")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property KmatrixCoreRoomEventFilter * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timeline")
*/
@property KmatrixCoreRoomEventFilter * _Nullable timeline __attribute__((swift_name("timeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginGetLoginFlowsResponse.Companion")))
@interface KmatrixCoreLoginGetLoginFlowsResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreLoginGetLoginFlowsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginFlow")))
@interface KmatrixCoreLoginFlow : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreLoginFlowCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginPasswordResponse.Companion")))
@interface KmatrixCoreLoginPasswordResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreLoginPasswordResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KmatrixKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KmatrixKotlinByteIterator : KmatrixBase <KmatrixKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmatrixByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaGetConfigResponse.Companion")))
@interface KmatrixCoreMediaGetConfigResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreMediaGetConfigResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaPreviewUrlResponse.Companion")))
@interface KmatrixCoreMediaPreviewUrlResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreMediaPreviewUrlResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediaUploadResponse.Companion")))
@interface KmatrixCoreMediaUploadResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreMediaUploadResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsGetResponse.Companion")))
@interface KmatrixCoreNotificationsGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreNotificationsGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsGetResponse.Notification")))
@interface KmatrixCoreNotificationsGetResponseNotification : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreNotificationsGetResponseNotificationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actions")
*/
@property KmatrixKotlinArray<KmatrixKotlinx_serialization_jsonJsonElement *> *actions __attribute__((swift_name("actions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event")
*/
@property KmatrixCoreNotificationsGetResponseEvent *event __attribute__((swift_name("event")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="profile_tag")
*/
@property NSString * _Nullable profileTag __attribute__((swift_name("profileTag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="read")
*/
@property BOOL read __attribute__((swift_name("read")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString *roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ts")
*/
@property int64_t ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePresenceGetResponse.Companion")))
@interface KmatrixCorePresenceGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePresenceGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileGetAvatarUrlResponse.Companion")))
@interface KmatrixCoreProfileGetAvatarUrlResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreProfileGetAvatarUrlResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileGetDisplayNameResponse.Companion")))
@interface KmatrixCoreProfileGetDisplayNameResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreProfileGetDisplayNameResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileGetProfileResponse.Companion")))
@interface KmatrixCoreProfileGetProfileResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreProfileGetProfileResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRulesGetEnabledResponse.Companion")))
@interface KmatrixCorePushRulesGetEnabledResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushRulesGetEnabledResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRulesGetResponse.Companion")))
@interface KmatrixCorePushRulesGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushRulesGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRuleset")))
@interface KmatrixCorePushRuleset : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushRulesetCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property KmatrixKotlinArray<KmatrixCorePushRule *> * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="override")
*/
@property KmatrixKotlinArray<KmatrixCorePushRule *> * _Nullable override __attribute__((swift_name("override")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room")
*/
@property KmatrixKotlinArray<KmatrixCorePushRule *> * _Nullable room __attribute__((swift_name("room")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property KmatrixKotlinArray<KmatrixCorePushRule *> * _Nullable sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="underride")
*/
@property KmatrixKotlinArray<KmatrixCorePushRule *> * _Nullable underride __attribute__((swift_name("underride")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushersGetResponse.Companion")))
@interface KmatrixCorePushersGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushersGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushersGetResponse.Pusher")))
@interface KmatrixCorePushersGetResponsePusher : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushersGetResponsePusherCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="app_display_name")
*/
@property NSString *appDisplayName __attribute__((swift_name("appDisplayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="app_id")
*/
@property NSString *appId __attribute__((swift_name("appId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="data")
*/
@property KmatrixCorePushersGetResponsePusherData *data __attribute__((swift_name("data")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="device_display_name")
*/
@property NSString *deviceDisplayName __attribute__((swift_name("deviceDisplayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property KmatrixBoolean * _Nullable enabled __attribute__((swift_name("enabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="kind")
*/
@property NSString *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lang")
*/
@property NSString *lang __attribute__((swift_name("lang")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="profile_tag")
*/
@property NSString * _Nullable profileTag __attribute__((swift_name("profileTag")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pushkey")
*/
@property NSString *pushkey __attribute__((swift_name("pushkey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePusherData")))
@interface KmatrixCorePusherData : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/** The format to use when sending notifications (e.g., "event_id_only"). */
@property NSString * _Nullable format __attribute__((swift_name("format")));

/** The URL to use to send notifications to (required for "http" kind). */
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationsGetResponse.Companion")))
@interface KmatrixCoreRelationsGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRelationsGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationsGetResponse.RelationEvent")))
@interface KmatrixCoreRelationsGetResponseRelationEvent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRelationsGetResponseRelationEventCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property int64_t originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString *sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state_key")
*/
@property NSString * _Nullable stateKey __attribute__((swift_name("stateKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreThreadsGetResponse.Companion")))
@interface KmatrixCoreThreadsGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreThreadsGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreThreadsGetResponse.ThreadEvent")))
@interface KmatrixCoreThreadsGetResponseThreadEvent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreThreadsGetResponseThreadEventCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property int64_t originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString *sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unsigned")
*/
@property (getter=unsigned, setter=setUnsigned:) NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> * _Nullable unsigned_ __attribute__((swift_name("unsigned_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsCreateRoomResponse.Companion")))
@interface KmatrixCoreRoomsCreateRoomResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsCreateRoomResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetJoinedMembersResponse.Companion")))
@interface KmatrixCoreRoomsGetJoinedMembersResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsGetJoinedMembersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomMember")))
@interface KmatrixCoreRoomMember : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomMemberCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_url")
*/
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetJoinedRoomsResponse.Companion")))
@interface KmatrixCoreRoomsGetJoinedRoomsResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsGetJoinedRoomsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetMembersResponse.Companion")))
@interface KmatrixCoreRoomsGetMembersResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsGetMembersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomEvent")))
@interface KmatrixCoreRoomEvent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomEventCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSDictionary<NSString *, id> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property int64_t originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString *sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state_key")
*/
@property NSString * _Nullable stateKey __attribute__((swift_name("stateKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unsigned")
*/
@property (getter=unsigned, setter=setUnsigned:) NSDictionary<NSString *, id> * _Nullable unsigned_ __attribute__((swift_name("unsigned_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetMessagesResponse.Companion")))
@interface KmatrixCoreRoomsGetMessagesResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsGetMessagesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsGetRoomNameResponse.Companion")))
@interface KmatrixCoreRoomsGetRoomNameResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsGetRoomNameResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsStateEvent.Companion")))
@interface KmatrixCoreRoomsStateEventCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsStateEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsJoinRoomResponse.Companion")))
@interface KmatrixCoreRoomsJoinRoomResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsJoinRoomResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsRedactEventResponse.Companion")))
@interface KmatrixCoreRoomsRedactEventResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsRedactEventResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendMessageResponse.Companion")))
@interface KmatrixCoreRoomsSendMessageResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsSendMessageResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomsSendStateEventResponse.Companion")))
@interface KmatrixCoreRoomsSendStateEventResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomsSendStateEventResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResponse.Companion")))
@interface KmatrixCoreSearchResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSearchResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchCategories")))
@interface KmatrixCoreSearchCategories : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSearchCategoriesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_events")
*/
@property KmatrixCoreSearchRoomEvents * _Nullable roomEvents __attribute__((swift_name("roomEvents")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncResponse.Companion")))
@interface KmatrixCoreSyncResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncAccountData")))
@interface KmatrixCoreSyncAccountData : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncAccountDataCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> *events __attribute__((swift_name("events")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncRooms")))
@interface KmatrixCoreSyncRooms : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncRoomsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invite")
*/
@property NSDictionary<NSString *, KmatrixCoreSyncInvitedRoom *> * _Nullable invite __attribute__((swift_name("invite")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="join")
*/
@property NSDictionary<NSString *, KmatrixCoreSyncJoinedRoom *> * _Nullable join __attribute__((swift_name("join")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="leave")
*/
@property NSDictionary<NSString *, KmatrixCoreSyncLeftRoom *> * _Nullable leave __attribute__((swift_name("leave")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTagsGetResponse.Companion")))
@interface KmatrixCoreTagsGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreTagsGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTagContent")))
@interface KmatrixCoreTagContent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreTagContentCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="order")
*/
@property KmatrixDouble * _Nullable order __attribute__((swift_name("order")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDirectorySearchResponse.Companion")))
@interface KmatrixCoreUserDirectorySearchResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreUserDirectorySearchResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDirectoryUser")))
@interface KmatrixCoreUserDirectoryUser : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreUserDirectoryUserCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_url")
*/
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_id")
*/
@property NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVersionsGetResponse.Companion")))
@interface KmatrixCoreVersionsGetResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreVersionsGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreVoIPGetTurnServerResponse.Companion")))
@interface KmatrixCoreVoIPGetTurnServerResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreVoIPGetTurnServerResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit.Companion")))
@interface KmatrixCoreRateLimitCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRateLimitCompanion *shared __attribute__((swift_name("shared")));
- (KmatrixCoreRateLimit * _Nullable)ofResponse:(KmatrixKhttpclientHttpResponse *)response __attribute__((swift_name("of(response:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KmatrixKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.3")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant")))
@interface KmatrixKotlinInstant : KmatrixBase <KmatrixKotlinComparable>
@property (class, readonly, getter=companion) KmatrixKotlinInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmatrixKotlinInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KmatrixKotlinInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(KmatrixKotlinInstant *)other __attribute__((swift_name("minus(other:)")));
- (KmatrixKotlinInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmatrixKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KmatrixKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KmatrixKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmatrixKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KmatrixKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KmatrixKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmatrixKotlinx_serialization_coreKSerializer <KmatrixKotlinx_serialization_coreSerializationStrategy, KmatrixKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.CapabilitiesCompanion")))
@interface KmatrixCoreCapabilitiesGetResponseCapabilitiesCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreCapabilitiesGetResponseCapabilitiesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.ChangePassword")))
@interface KmatrixCoreCapabilitiesGetResponseChangePassword : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreCapabilitiesGetResponseChangePasswordCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.RoomVersions")))
@interface KmatrixCoreCapabilitiesGetResponseRoomVersions : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreCapabilitiesGetResponseRoomVersionsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="available")
*/
@property NSDictionary<NSString *, NSString *> *available __attribute__((swift_name("available")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="default")
*/
@property (getter=default, setter=setDefault:) NSString *default_ __attribute__((swift_name("default_")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.BooleanCapability")))
@interface KmatrixCoreCapabilitiesGetResponseBooleanCapability : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreCapabilitiesGetResponseBooleanCapabilityCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDevice.Companion")))
@interface KmatrixCoreDeviceCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreDeviceCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePublicRoomChunk.Companion")))
@interface KmatrixCorePublicRoomChunkCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePublicRoomChunkCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventsGetContextResponse.ContextEventCompanion")))
@interface KmatrixCoreEventsGetContextResponseContextEventCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreEventsGetContextResponseContextEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KmatrixKotlinx_serialization_jsonJsonElementCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEventFilter.Companion")))
@interface KmatrixCoreEventFilterCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreEventFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomFilter.Companion")))
@interface KmatrixCoreRoomFilterCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomEventFilter")))
@interface KmatrixCoreRoomEventFilter : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreRoomEventFilterCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contains_url")
*/
@property KmatrixBoolean * _Nullable containsUrl __attribute__((swift_name("containsUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="include_redundant_members")
*/
@property KmatrixBoolean * _Nullable includeRedundantMembers __attribute__((swift_name("includeRedundantMembers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lazy_load_members")
*/
@property KmatrixBoolean * _Nullable lazyLoadMembers __attribute__((swift_name("lazyLoadMembers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="limit")
*/
@property KmatrixInt * _Nullable limit __attribute__((swift_name("limit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="not_rooms")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable notRooms __attribute__((swift_name("notRooms")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="not_senders")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable notSenders __attribute__((swift_name("notSenders")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="not_types")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable notTypes __attribute__((swift_name("notTypes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rooms")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable rooms __attribute__((swift_name("rooms")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="senders")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable senders __attribute__((swift_name("senders")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="types")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable types __attribute__((swift_name("types")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLoginFlow.Companion")))
@interface KmatrixCoreLoginFlowCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreLoginFlowCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsGetResponse.NotificationCompanion")))
@interface KmatrixCoreNotificationsGetResponseNotificationCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreNotificationsGetResponseNotificationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsGetResponse.Event")))
@interface KmatrixCoreNotificationsGetResponseEvent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreNotificationsGetResponseEventCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSDictionary<NSString *, KmatrixKotlinx_serialization_jsonJsonElement *> *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString *eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property int64_t originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString *sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state_key")
*/
@property NSString * _Nullable stateKey __attribute__((swift_name("stateKey")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRuleset.Companion")))
@interface KmatrixCorePushRulesetCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushRulesetCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRule")))
@interface KmatrixCorePushRule : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushRuleCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actions")
*/
@property KmatrixKotlinArray<id> *actions __attribute__((swift_name("actions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conditions")
*/
@property KmatrixKotlinArray<KmatrixCorePushCondition *> * _Nullable conditions __attribute__((swift_name("conditions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="default")
*/
@property (getter=default, setter=setDefault:) BOOL default_ __attribute__((swift_name("default_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pattern")
*/
@property NSString * _Nullable pattern __attribute__((swift_name("pattern")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rule_id")
*/
@property NSString *ruleId __attribute__((swift_name("ruleId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushersGetResponse.PusherCompanion")))
@interface KmatrixCorePushersGetResponsePusherCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushersGetResponsePusherCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushersGetResponse.PusherData")))
@interface KmatrixCorePushersGetResponsePusherData : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushersGetResponsePusherDataCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="format")
*/
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationsGetResponse.RelationEventCompanion")))
@interface KmatrixCoreRelationsGetResponseRelationEventCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRelationsGetResponseRelationEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreThreadsGetResponse.ThreadEventCompanion")))
@interface KmatrixCoreThreadsGetResponseThreadEventCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreThreadsGetResponseThreadEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomMember.Companion")))
@interface KmatrixCoreRoomMemberCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomMemberCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomEvent.Companion")))
@interface KmatrixCoreRoomEventCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchCategories.Companion")))
@interface KmatrixCoreSearchCategoriesCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSearchCategoriesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchRoomEvents")))
@interface KmatrixCoreSearchRoomEvents : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSearchRoomEventsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="count")
*/
@property KmatrixLong * _Nullable count __attribute__((swift_name("count")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_batch")
*/
@property NSString * _Nullable nextBatch __attribute__((swift_name("nextBatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="results")
*/
@property KmatrixKotlinArray<KmatrixCoreSearchResult *> *results __attribute__((swift_name("results")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncAccountData.Companion")))
@interface KmatrixCoreSyncAccountDataCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncAccountDataCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncRooms.Companion")))
@interface KmatrixCoreSyncRoomsCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncRoomsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncInvitedRoom")))
@interface KmatrixCoreSyncInvitedRoom : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncInvitedRoomCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invite_state")
*/
@property KmatrixCoreSyncInviteState * _Nullable inviteState __attribute__((swift_name("inviteState")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncJoinedRoom")))
@interface KmatrixCoreSyncJoinedRoom : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncJoinedRoomCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_data")
*/
@property KmatrixCoreSyncAccountData * _Nullable accountData __attribute__((swift_name("accountData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ephemeral")
*/
@property KmatrixCoreSyncEphemeral * _Nullable ephemeral __attribute__((swift_name("ephemeral")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property KmatrixCoreSyncState * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="summary")
*/
@property KmatrixCoreSyncRoomSummary * _Nullable summary __attribute__((swift_name("summary")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timeline")
*/
@property KmatrixCoreSyncTimeline * _Nullable timeline __attribute__((swift_name("timeline")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread_notifications")
*/
@property KmatrixCoreSyncUnreadNotifications * _Nullable unreadNotifications __attribute__((swift_name("unreadNotifications")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncLeftRoom")))
@interface KmatrixCoreSyncLeftRoom : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncLeftRoomCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_data")
*/
@property KmatrixCoreSyncAccountData * _Nullable accountData __attribute__((swift_name("accountData")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@property KmatrixCoreSyncState * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="timeline")
*/
@property KmatrixCoreSyncTimeline * _Nullable timeline __attribute__((swift_name("timeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTagContent.Companion")))
@interface KmatrixCoreTagContentCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreTagContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserDirectoryUser.Companion")))
@interface KmatrixCoreUserDirectoryUserCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreUserDirectoryUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse")))
@interface KmatrixKhttpclientHttpResponse : KmatrixBase
- (instancetype)initWithStatus:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(KmatrixKotlinByteArray *)body __attribute__((swift_name("init(status:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKhttpclientHttpResponseCompanion *companion __attribute__((swift_name("companion")));
- (id _Nullable)typedBodyJson:(KmatrixKotlinx_serialization_jsonJson *)json __attribute__((swift_name("typedBody(json:)")));
@property (readonly) KmatrixKotlinByteArray *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *stringBody __attribute__((swift_name("stringBody")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant.Companion")))
@interface KmatrixKotlinInstantCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKotlinInstantCompanion *shared __attribute__((swift_name("shared")));
- (KmatrixKotlinInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (KmatrixKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (KmatrixKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (KmatrixKotlinInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (KmatrixKotlinInstant *)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (KmatrixKotlinInstant * _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@property (readonly) KmatrixKotlinInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) KmatrixKotlinInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmatrixKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KmatrixKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KmatrixKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KmatrixKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KmatrixKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KmatrixKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmatrixKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmatrixKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KmatrixKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KmatrixKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KmatrixKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KmatrixKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmatrixKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KmatrixKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KmatrixKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KmatrixKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmatrixKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.ChangePasswordCompanion")))
@interface KmatrixCoreCapabilitiesGetResponseChangePasswordCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreCapabilitiesGetResponseChangePasswordCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.RoomVersionsCompanion")))
@interface KmatrixCoreCapabilitiesGetResponseRoomVersionsCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreCapabilitiesGetResponseRoomVersionsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCapabilitiesGetResponse.BooleanCapabilityCompanion")))
@interface KmatrixCoreCapabilitiesGetResponseBooleanCapabilityCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreCapabilitiesGetResponseBooleanCapabilityCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRoomEventFilter.Companion")))
@interface KmatrixCoreRoomEventFilterCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreRoomEventFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsGetResponse.EventCompanion")))
@interface KmatrixCoreNotificationsGetResponseEventCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreNotificationsGetResponseEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushRule.Companion")))
@interface KmatrixCorePushRuleCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushRuleCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushCondition")))
@interface KmatrixCorePushCondition : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCorePushConditionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is")
*/
@property NSString * _Nullable is __attribute__((swift_name("is")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="key")
*/
@property NSString * _Nullable key __attribute__((swift_name("key")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="kind")
*/
@property NSString *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pattern")
*/
@property NSString * _Nullable pattern __attribute__((swift_name("pattern")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushersGetResponse.PusherDataCompanion")))
@interface KmatrixCorePushersGetResponsePusherDataCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushersGetResponsePusherDataCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchRoomEvents.Companion")))
@interface KmatrixCoreSearchRoomEventsCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSearchRoomEventsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResult")))
@interface KmatrixCoreSearchResult : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSearchResultCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rank")
*/
@property KmatrixDouble * _Nullable rank __attribute__((swift_name("rank")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result")
*/
@property KmatrixCoreSearchResultEvent * _Nullable result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncInvitedRoom.Companion")))
@interface KmatrixCoreSyncInvitedRoomCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncInvitedRoomCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncInviteState")))
@interface KmatrixCoreSyncInviteState : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncInviteStateCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> *events __attribute__((swift_name("events")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncJoinedRoom.Companion")))
@interface KmatrixCoreSyncJoinedRoomCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncJoinedRoomCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncEphemeral")))
@interface KmatrixCoreSyncEphemeral : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncEphemeralCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> *events __attribute__((swift_name("events")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncState")))
@interface KmatrixCoreSyncState : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncStateCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> *events __attribute__((swift_name("events")));
@end


/**
 * Room summary block from `/sync` (MSC688). Lets clients compute a room's
 * display name and member count without fetching the full member list, which
 * is what enables `lazy_load_members`.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncRoomSummary")))
@interface KmatrixCoreSyncRoomSummary : KmatrixBase

/**
 * Room summary block from `/sync` (MSC688). Lets clients compute a room's
 * display name and member count without fetching the full member list, which
 * is what enables `lazy_load_members`.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Room summary block from `/sync` (MSC688). Lets clients compute a room's
 * display name and member count without fetching the full member list, which
 * is what enables `lazy_load_members`.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncRoomSummaryCompanion *companion __attribute__((swift_name("companion")));

/**
 * A subset of the room members used to name the room when it has no
 * `m.room.name` / `m.room.canonical_alias` (the current user is excluded).
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.heroes")
*/
@property KmatrixKotlinArray<NSString *> * _Nullable heroes __attribute__((swift_name("heroes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.invited_member_count")
*/
@property KmatrixInt * _Nullable invitedMemberCount __attribute__((swift_name("invitedMemberCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="m.joined_member_count")
*/
@property KmatrixInt * _Nullable joinedMemberCount __attribute__((swift_name("joinedMemberCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncTimeline")))
@interface KmatrixCoreSyncTimeline : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncTimelineCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="events")
*/
@property KmatrixKotlinArray<KmatrixCoreRoomEvent *> *events __attribute__((swift_name("events")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="limited")
*/
@property KmatrixBoolean * _Nullable limited __attribute__((swift_name("limited")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="prev_batch")
*/
@property NSString * _Nullable prevBatch __attribute__((swift_name("prevBatch")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncUnreadNotifications")))
@interface KmatrixCoreSyncUnreadNotifications : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSyncUnreadNotificationsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="highlight_count")
*/
@property KmatrixInt * _Nullable highlightCount __attribute__((swift_name("highlightCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="notification_count")
*/
@property KmatrixInt * _Nullable notificationCount __attribute__((swift_name("notificationCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncLeftRoom.Companion")))
@interface KmatrixCoreSyncLeftRoomCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncLeftRoomCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse.Companion")))
@interface KmatrixKhttpclientHttpResponseCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKhttpclientHttpResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fromResponse:(KmatrixKtor_client_coreHttpResponse *)response completionHandler:(void (^)(KmatrixKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("from(response:completionHandler:)")));
@property (readonly) KmatrixKotlinx_serialization_jsonJson *mapper __attribute__((swift_name("mapper")));
@end


/**
 * Represents an instance of a serialization format
 * that can interact with [KSerializer] and is a supertype of all entry points for a serialization.
 * It does not impose any restrictions on a serialized form or underlying storage, neither it exposes them.
 *
 * Concrete data types and API for user-interaction are responsibility of a concrete subclass or subinterface,
 * for example [StringFormat], [BinaryFormat] or `Json`.
 *
 * Typically, formats have their specific [Encoder] and [Decoder] implementations
 * as private classes and do not expose them.
 *
 * ### Exception types for `SerialFormat` implementation
 *
 * Methods responsible for format-specific encoding and decoding are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors. It is recommended to throw subtypes of [SerializationException]
 * for encoder and decoder specific errors and [IllegalArgumentException] for input
 * and output validation-specific errors.
 *
 * For formats
 *
 * ### Not stable for inheritance
 *
 * `SerialFormat` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * It is safe to operate with instances of `SerialFormat` and call its methods.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol KmatrixKotlinx_serialization_coreSerialFormat
@required

/**
 * Contains all serializers registered by format user for [Contextual] and [Polymorphic] serialization.
 *
 * The same module should be exposed in the format's [Encoder] and [Decoder].
 */
@property (readonly) KmatrixKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerialFormat] that allows conversions to and from [String] via [encodeToString] and [decodeFromString] methods.
 *
 * ### Not stable for inheritance
 *
 * `StringFormat` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * It is safe to operate with instances of `StringFormat` and call its methods.
 */
__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol KmatrixKotlinx_serialization_coreStringFormat <KmatrixKotlinx_serialization_coreSerialFormat>
@required

/**
 * Decodes and deserializes the given [string] to the value of type [T] using the given [deserializer].
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
- (id _Nullable)decodeFromStringDeserializer:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));

/**
 * Serializes and encodes the given [value] to string using the given [serializer].
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
- (NSString *)encodeToStringSerializer:(id<KmatrixKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end


/**
 * The main entry point to work with JSON serialization.
 * It is typically used by constructing an application-specific instance, with configured JSON-specific behaviour
 * and, if necessary, registered in [SerializersModule] custom serializers.
 * `Json` instance can be configured in its `Json {}` factory function using [JsonBuilder].
 * For demonstration purposes or trivial usages, Json [companion][Json.Default] can be used instead.
 *
 * Then constructed instance can be used either as regular [SerialFormat] or [StringFormat]
 * or for converting objects to [JsonElement] back and forth.
 *
 * This is the only serial format which has the first-class [JsonElement] support.
 * Any serializable class can be serialized to or from [JsonElement] with [Json.decodeFromJsonElement] and [Json.encodeToJsonElement] respectively or
 * serialize properties of [JsonElement] type.
 *
 * Example of usage:
 * ```
 * @Serializable
 * data class Data(val id: Int, val data: String, val extensions: JsonElement)
 *
 * val json = Json { ignoreUnknownKeys = true }
 * val instance = Data(42, "some data", buildJsonObject { put("key", "value") })
 *
 * // Plain Json usage: returns '{"id": 42, "some data", "extensions": {"key": "value" } }'
 * val jsonString: String = json.encodeToString(instance)
 *
 * // JsonElement serialization, specific for JSON format
 * val jsonElement: JsonElement = json.encodeToJsonElement(instance)
 *
 * // Deserialize from string
 * val deserialized: Data = json.decodeFromString<Data>(jsonString)
 *
 * // Deserialize from json element, JSON-specific
 * val deserializedFromElement: Data = json.decodeFromJsonElement<Data>(jsonElement)
 *
 *  // Deserialize from string to JSON tree, JSON-specific
 * val deserializedElement: JsonElement = json.parseToJsonElement(jsonString)
 *
 * // Deserialize a stream of a single item from an input stream
 * val sequence = Json.decodeToSequence<Data>(ByteArrayInputStream(jsonString.encodeToByteArray()))
 * for (item in sequence) {
 *     println(item) // Prints deserialized Data value
 * }
 * ```
 *
 * Json instance also exposes its [configuration] that can be used in custom serializers
 * that rely on [JsonDecoder] and [JsonEncoder] for customizable behaviour.
 *
 * Json format configuration can be refined using the corresponding constructor:
 * ```
 * val defaultJson = Json {
 *     encodeDefaults = true
 *     ignoreUnknownKeys = true
 * }
 * // Will inherit the properties of defaultJson
 * val debugEndpointJson = Json(defaultJson) {
 *     // ignoreUnknownKeys and encodeDefaults are set to true
 *     prettyPrint = true
 * }
 * ```
 */
__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface KmatrixKotlinx_serialization_jsonJson : KmatrixBase <KmatrixKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) KmatrixKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));

/**
 * Deserializes the given [element] into a value of type [T] using the given [deserializer].
 *
 * @throws [SerializationException] if the given JSON element is not a valid JSON input for the type [T]
 * @throws [IllegalArgumentException] if the decoded input cannot be represented as a valid instance of type [T]
 */
- (id _Nullable)decodeFromJsonElementDeserializer:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(KmatrixKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));

/**
 * Decodes and deserializes the given JSON [string] to the value of type [T] using deserializer
 * retrieved from the reified type parameter.
 * Example:
 * ```
 * @Serializable
 * data class Project(val name: String, val language: String)
 * //  Project(name=kotlinx.serialization, language=Kotlin)
 * println(Json.decodeFromString<Project>("""{"name":"kotlinx.serialization","language":"Kotlin"}"""))
 * ```
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));

/**
 * Deserializes the given JSON [string] into a value of type [T] using the given [deserializer].
 * Example:
 * ```
 * @Serializable
 * data class Project(val name: String, val language: String)
 * //  Project(name=kotlinx.serialization, language=Kotlin)
 * println(Json.decodeFromString(Project.serializer(), """{"name":"kotlinx.serialization","language":"Kotlin"}"""))
 * ```
 *
 * @throws [SerializationException] if the given JSON string is not a valid JSON input for the type [T]
 * @throws [IllegalArgumentException] if the decoded input cannot be represented as a valid instance of type [T]
 */
- (id _Nullable)decodeFromStringDeserializer:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));

/**
 * Serializes the given [value] into an equivalent [JsonElement] using the given [serializer]
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON
 */
- (KmatrixKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<KmatrixKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));

/**
 * Serializes the [value] of type [T] into an equivalent JSON using serializer
 * retrieved from the reified type parameter.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 *
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON.
 */
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));

/**
 * Serializes the [value] into an equivalent JSON using the given [serializer].
 * This method is recommended to be used with an explicit serializer (e.g. the custom or third-party one),
 * otherwise the `encodeToString(value: T)` version might be preferred as the most concise one.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 *
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(Project.serializer(), data))
 * // The same as Json.encodeToString<T>(value: T) overload
 * println(Json.encodeToString(data))
 * ```
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON.
 */
- (NSString *)encodeToStringSerializer:(id<KmatrixKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));

/**
 * Deserializes the given JSON [string] into a corresponding [JsonElement] representation.
 *
 * @throws [SerializationException] if the given string is not a valid JSON
 */
- (KmatrixKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) KmatrixKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) KmatrixKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmatrixKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KmatrixKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmatrixKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmatrixKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmatrixKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmatrixKotlinx_serialization_coreSerializersModule : KmatrixBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KmatrixKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmatrixKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmatrixKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmatrixKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmatrixKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmatrixKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmatrixKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmatrixKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmatrixKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmatrixKotlinx_serialization_coreSerialKind : KmatrixBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmatrixKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KmatrixKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmatrixKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmatrixKotlinNothing : KmatrixBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePushCondition.Companion")))
@interface KmatrixCorePushConditionCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCorePushConditionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResult.Companion")))
@interface KmatrixCoreSearchResultCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSearchResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResultEvent")))
@interface KmatrixCoreSearchResultEvent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSearchResultEventCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property KmatrixCoreSearchResultContent * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="event_id")
*/
@property NSString * _Nullable eventId __attribute__((swift_name("eventId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="origin_server_ts")
*/
@property KmatrixLong * _Nullable originServerTs __attribute__((swift_name("originServerTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="room_id")
*/
@property NSString * _Nullable roomId __attribute__((swift_name("roomId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sender")
*/
@property NSString * _Nullable sender __attribute__((swift_name("sender")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncInviteState.Companion")))
@interface KmatrixCoreSyncInviteStateCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncInviteStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncEphemeral.Companion")))
@interface KmatrixCoreSyncEphemeralCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncEphemeralCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncState.Companion")))
@interface KmatrixCoreSyncStateCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncStateCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Room summary block from `/sync` (MSC688). Lets clients compute a room's
 * display name and member count without fetching the full member list, which
 * is what enables `lazy_load_members`.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncRoomSummary.Companion")))
@interface KmatrixCoreSyncRoomSummaryCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Room summary block from `/sync` (MSC688). Lets clients compute a room's
 * display name and member count without fetching the full member list, which
 * is what enables `lazy_load_members`.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncRoomSummaryCompanion *shared __attribute__((swift_name("shared")));

/**
 * Room summary block from `/sync` (MSC688). Lets clients compute a room's
 * display name and member count without fetching the full member list, which
 * is what enables `lazy_load_members`.
 */
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncTimeline.Companion")))
@interface KmatrixCoreSyncTimelineCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncTimelineCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSyncUnreadNotifications.Companion")))
@interface KmatrixCoreSyncUnreadNotificationsCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSyncUnreadNotificationsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A message either from the client or the server,
 * that has [headers] associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage)
 */
__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KmatrixKtor_httpHttpMessage
@required

/**
 * Message [Headers]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage.headers)
 */
@property (readonly) id<KmatrixKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end


/**
 * A scope in which coroutines run.
 *
 * A coroutine scope allows managing the lifecycles of several coroutines simultaneously
 * and setting the execution properties with which coroutines (its "children") are launched.
 *
 * Execution properties are [CoroutineContext.Element] values that may affect the behavior of
 * `kotlinx.coroutines`—for example, which thread pool a coroutine should run on.
 * See a more detailed explanation of coroutine context elements in a separate section below.
 *
 * A set of rules called "structured concurrency" ensures that the lifecycles of children
 * are nested inside the lifecycles of their parent scopes.
 * For example, if a scope is cancelled, all coroutines in it are cancelled too, and the scope itself
 * cannot be completed until all its children are completed.
 * See a more detailed explanation of structured concurrency in a separate section below.
 *
 * ## Using coroutine scopes
 *
 * The methods of this interface are not intended to be called directly.
 * Instead, a [CoroutineScope] is passed as a receiver to the coroutine builders such as [launch] and [async]
 * and affects the execution properties and lifetimes of the created coroutines.
 *
 * ## Coroutine context elements
 *
 * A [CoroutineScope] is defined by a set of [CoroutineContext] elements, one of which is typically a [Job],
 * described in the section on structured concurrency and responsible for managing lifetimes of coroutines.
 *
 * Other coroutine context elements include, but are not limited to, the following:
 *
 * - The scheduling policy, represented by a [CoroutineDispatcher] element.
 *   Some commonly used dispatchers are provided in the [Dispatchers] object.
 * - [CoroutineExceptionHandler] that defines how to handle coroutine failures that cannot
 *   be propagated to any other coroutine.
 * - A [CoroutineName] element that can be used to name coroutines for debugging purposes.
 * - On the JVM, a `ThreadContextElement` ensures that a specific thread-local value gets set on the thread
 *   that executes the coroutine.
 *
 * ## Obtaining a coroutine scope
 *
 * Manual implementations of this interface are not recommended.
 * Instead, a [CoroutineScope] should be obtained in a way that reflects the
 * intended structured concurrency relationships.
 *
 * ### Lexical scopes
 *
 * [coroutineScope] and [supervisorScope] functions can be called in any `suspend` function to define a scope
 * lexically, ensuring that all coroutines launched in this scope complete by the time the scope-limiting
 * function exits.
 *
 * ```
 * suspend fun doSomething() = coroutineScope { // scope `A`
 *     repeat(5) { outer ->
 *         // spawn a new coroutine in the scope `A`
 *         launch {
 *             println("Coroutine $outer started")
 *             coroutineScope { // scope `B`, separate for each `outer` coroutine
 *                 repeat(5) { inner ->
 *                     // spawn a new coroutine in the scope `B`
 *                     launch {
 *                         println("Coroutine $outer.$inner started")
 *                         delay(10.milliseconds)
 *                         println("Coroutine $outer.$inner finished")
 *                     }
 *                 }
 *             }
 *             // will only exit once all `Coroutine $outer.X finished` messages are printed
 *             println("Coroutine $outer finished")
 *         }
 *     }
 * } // will only exit once all `Coroutine X finished` messages are printed
 * ```
 *
 * This is the preferred way to create a [CoroutineScope].
 *
 * ### `CoroutineScope` constructor function
 *
 * When the lifecycle of the scope is not limited lexically
 * (for example, when coroutines should outlive the function that creates them)
 * but is tied to the lifecycle of some entity, the [CoroutineScope] constructor function can be used
 * to define a personal scope for the entity. This scope should be stored as a field in the entity.
 *
 * **The key part of using a custom `CoroutineScope` is cancelling it at the end of the lifecycle.**
 * The [CoroutineScope.cancel] extension function shall be used when the entity launching coroutines
 * is no longer needed. It cancels all the coroutines that might still be running on its behalf.
 *
 * ```
 * class MyEntity(scope: CoroutineScope? = null): AutoCloseable {
 *    // careful: do not write `get() =` here by accident!
 *    private val scope = scope ?: CoroutineScope(SupervisorJob() + CoroutineExceptionHandler { _, e ->
 *        println("Error in coroutine: $e")
 *    })
 *
 *    fun doSomethingWhileEntityExists() = scope.launch {
 *        while (true) {
 *            // do some work
 *            delay(50.milliseconds)
 *            println("Doing something")
 *        }
 *    }
 *
 *    override fun close() {
 *        // cancel all computations related to this entity
 *        scope.cancel()
 *    }
 * }
 *
 * fun main() {
 *     MyEntity().use { entity ->
 *         entity.doSomethingWhileEntityExists()
 *         Thread.sleep(200)
 *     }
 * }
 * ```
 *
 * Usually, a custom [CoroutineScope] should be created with a [SupervisorJob] and
 * a [CoroutineExceptionHandler] to handle exceptions in child coroutines.
 * See the documentation for the [CoroutineScope] constructor function for more details.
 * Also note that `MyEntity` accepts the `scope` parameter that can be used to pass a custom scope for testing.
 *
 * Sometimes, coroutine-aware frameworks provide [CoroutineScope] instances like this out of the box.
 * For example, on Android, all entities with a lifecycle and all `ViewModel` instances expose a [CoroutineScope]:
 * see [the corresponding documentation](https://developer.android.com/topic/libraries/architecture/coroutines).
 *
 * ### Taking another view of an existing scope
 *
 * Occasionally, several coroutines need to be launched with the same additional [CoroutineContext] that is not
 * present in the original scope.
 * In this case, the [CoroutineScope.plus] operator can be used to create a new view of an existing scope:
 *
 * ```
 * coroutineScope {
 *     val sameScopeButInUiThread = this + Dispatchers.Main
 *     sameScopeButInUiThread.launch {
 *         println("Running on the main thread")
 *     }
 *     launch {
 *         println("This will run using the original dispatcher")
 *     }
 *     sameScopeButInUiThread.launch {
 *         println("And this will also run on the main thread")
 *     }
 * }
 * ```
 *
 * The lifecycle of the new scope is the same as the original one, but the context includes new elements.
 *
 * ### Application lifecycle scope
 *
 * [GlobalScope] is a [CoroutineScope] that has the lifetime of the whole application.
 * Although it is convenient for launching top-level coroutines that are not tied to the lifecycle of any entity,
 * it is easy to misuse it and create memory or resource leaks when a coroutine actually should be tied
 * to the lifecycle of some entity.
 *
 * ```
 * GlobalScope.launch(CoroutineExceptionHandler { _, e ->
 *     println("Error in coroutine: $e")
 * }) {
 *    while (true) {
 *        println("I will be running forever, you cannot stop me!")
 *        delay(1.seconds)
 *    }
 * }
 * ```
 *
 * ### `by`-delegation
 *
 * When the approaches listed above are not applicable and a custom [CoroutineScope] implementation is needed,
 * it is recommended to use `by`-delegation to implement the interface:
 *
 * ```
 * class MyEntity : CoroutineScope by CoroutineScope(
 *     SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *         println("Error in coroutine: $e")
 *     }
 * )
 * ```
 *
 * ## Structured concurrency in detail
 *
 * ### Overview
 *
 * *Structured concurrency* is an approach to concurrent programming that attempts to clarify the lifecycles of
 * concurrent operations and to make them easier to reason about.
 *
 * Skim the following motivating example:
 *
 * ```
 * suspend fun downloadFile(url: String): ByteArray {
 *     return withContext(Dispatchers.IO) {
 *         // this code will execute on a thread for blocking work
 *         val file = byteArrayOf()
 *         // download the file
 *         file
 *     }
 * }
 *
 * suspend fun downloadAndCompareTwoFiles() {
 *     coroutineScope {
 *         val file1 = async {
 *             // if this fails, everything else quickly fails too
 *             downloadFile("http://example.com/file1")
 *         }
 *         val file2 = async {
 *             downloadFile("http://example.com/file2")
 *         }
 *         launch(Dispatchers.Main) {
 *             // create a separate coroutine on the UI thread
 *             if (file1.await().contentEquals(file2.await())) {
 *                 uiShow("Files are equal")
 *             } else {
 *                 uiShow("Files are not equal")
 *             }
 *         }
 *     }
 *     // this line will only run once all the coroutines created above
 *     // finish their work or get cancelled
 * }
 * ```
 *
 * In this example, two asynchronous operations are launched in parallel to download two files.
 * If one of the files fails to download, the other one is cancelled too, and the whole operation fails.
 * The `coroutineScope` function will not return until all the coroutines inside it are completed or cancelled.
 * In addition, it is possible to cancel the coroutine calling `downloadAndCompareTwoFiles`, and all the coroutines
 * inside it will be cancelled too.
 *
 * Without structured concurrency, ensuring that no resource leaks occur by the end of the operation and that
 * the operation responds promptly to failure and cancellation requests is challenging.
 * With structured concurrency, this orchestration is done automatically by the coroutine library,
 * and it is enough to specify the relationships between operations declaratively, as shown in the example,
 * without being overwhelmed by intricate inter-thread communications.
 *
 * ### Specifics
 *
 * Coroutines and [CoroutineScope] instances have an associated lifecycle.
 * A runtime representation of a lifecycle in `kotlinx.coroutines` is called a [Job].
 * [Job] instances form a hierarchy of parent-child relationships,
 * and the [Job] of every coroutine spawned in a [CoroutineScope] is a child of the [Job] of that scope.
 * This is often shortened to saying that the coroutine is the scope's child.
 *
 * See the [Job] documentation for a detailed explanation of the lifecycle stages.
 *
 * ```
 * coroutineScope {
 *     val job = coroutineContext[Job]
 *     val childJob = launch { }
 *     check(job === childJob.parent)
 * }
 * ```
 *
 * Because every coroutine has a lifecycle represented by a [Job], a [CoroutineScope] can be associated with it.
 * Most coroutine builders in `kotlinx.coroutines` expose the [CoroutineScope] of the coroutine on creation:
 *
 * ```
 * coroutineScope { // this block has a `CoroutineScope` receiver
 *     val parentScope = this
 *     var grandChildFinished = false
 *     val childJob = launch {
 *         // this block has a `CoroutineScope` receiver, too
 *         val childScope = this
 *         check(childScope.coroutineContext[Job]?.parent
 *             === parentScope.coroutineContext[Job])
 *         launch {
 *             // This block also has a `CoroutineScope` receiver!
 *             val grandChildScope = this
 *             check(grandChildScope.coroutineContext[Job]?.parent
 *                 === childScope.coroutineContext[Job])
 *             delay(100.milliseconds)
 *             grandChildFinished = true
 *         }
 *         // Because the grandchild coroutine
 *         // is a child of the child coroutine,
 *         // the child coroutine will not complete
 *         // until the grandchild coroutine does.
 *     }
 *     // Await completion of the child coroutine,
 *     // and therefore the grandchild coroutine too.
 *     childJob.join()
 *     check(grandChildFinished)
 * }
 * ```
 *
 * Such a [CoroutineScope] receiver is provided for [launch], [async], and other coroutine builders,
 * as well as for lexically scoping functions like [coroutineScope], [supervisorScope], and [withContext].
 * Each of these [CoroutineScope] instances is tied to the lifecycle of the code block it runs in.
 *
 * Like the example above shows, a coroutine does not complete until all its children are completed.
 * This means that [Job.join] on a [launch] or [async] result or [Deferred.await] on an [async] result
 * will not return until all the children of that coroutine are completed.
 * Likewise, lexically scoping functions like [coroutineScope] and [withContext] will not return
 * until all the coroutines launched in them are completed.
 *
 * #### Interactions between coroutines
 *
 * See the [Job] documentation for a detailed explanation of interactions between [Job] values.
 * Below is a summary of the most important points for structuring code in day-to-day usage.
 *
 * A coroutine cannot reach the final state until all its children have reached their final states.
 * See the example above.
 *
 * If a [CoroutineScope] is cancelled (either explicitly or because it corresponds to some coroutine that failed
 * with an exception), all its children are cancelled too:
 *
 * ```
 * val scope = CoroutineScope(
 *     SupervisorJob() + CoroutineExceptionHandler { _, e -> }
 * )
 * val job = scope.launch {
 *      // this coroutine will be cancelled
 *      awaitCancellation()
 * }
 * scope.cancel() // comment this out for the line below to hang
 * job.join() // finishes normally
 * ```
 *
 * A failure of a child coroutine causes the parent to fail with the same exception if all of the following conditions
 * are met:
 * 1. The exception is not a [CancellationException].
 * 2. The failed child coroutine was not created with lexically scoped coroutine builders
 *    like [coroutineScope] or [withContext].
 * 3. The parent coroutine's [Job] is not a [SupervisorJob].
 *
 * The same logic applies recursively to the parent of the parent, etc.
 * Example:
 *
 * ```
 * check(
 *     runCatching {
 *         coroutineScope {
 *             launch {
 *                 // This cancels the `coroutineScope` coroutine, since
 *                 // 1. The coroutine fails with a non-`CancellationException` exception,
 *                 // 2. `launch` is not a lexically scoped coroutine builder,
 *                 // 3. `coroutineScope` has a non-supervisor `Job`
 *                 throw IllegalStateException()
 *             }
 *             launch {
 *                 // this coroutine will be cancelled
 *                 // when the parent gets cancelled
 *                 awaitCancellation()
 *             }
 *         }
 *     }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * // The currently running coroutine will *not* be cancelled
 * // because the failed coroutine (`coroutineScope`) is lexically scoped.
 * check(currentCoroutineContext().isActive)
 * ```
 *
 * Child jobs can lead to the failure of the parent even if the parent has already finished its work
 * and was ready to return a value:
 *
 * ```
 * val deferred = GlobalScope.async {
 *     launch {
 *         delay(100.milliseconds)
 *         throw IllegalStateException()
 *     }
 *     10 // this value will be lost!
 * }
 * check(
 *     runCatching { deferred.await() }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * ```
 *
 * If several coroutines fail with non-[CancellationException] exceptions,
 * the first observed failure will be propagated, and the rest will be attached to it as
 * [suppressed exceptions][Throwable.suppressedExceptions].
 *
 * Failing with a [CancellationException] only cancels the coroutine itself and its children.
 * It does not affect the parent or sibling coroutines and is not considered a failure.
 *
 * ### How-to: stop failures of child coroutines from cancelling other coroutines
 *
 * If not affecting the [CoroutineScope] on a failure in a child coroutine is the desired behaviour,
 * then a [SupervisorJob] should be used instead of `Job()` when constructing the scope:
 *
 * ```
 * val scope = CoroutineScope(SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *     println("Coroutine failed with exception $e")
 * })
 * val failingCoroutine = scope.launch(Dispatchers.IO) {
 *     throw IllegalStateException("This exception will not cancel the scope")
 * }
 * failingCoroutine.join()
 * scope.launch(Dispatchers.IO) {
 *     println("This coroutine is active! See: ${isActive}")
 * }
 * ```
 *
 * Likewise, [supervisorScope] can replace [coroutineScope]:
 *
 * ```
 * supervisorScope {
 *     val failingCoroutine = launch(CoroutineExceptionHandler { _, e ->
 *         println("Coroutine failed with exception $e")
 *     }) {
 *         throw IllegalStateException("This exception will not cancel the scope")
 *     }
 *     failingCoroutine.join()
 *     launch {
 *         println("This coroutine is active! See: ${isActive}")
 *     }
 * }
 * ```
 *
 * ### How-to: prevent a child coroutine from being cancelled
 *
 * Sometimes, you may want to run a coroutine even if the parent coroutine is cancelled.
 * This pattern provides a way to achieve that:
 *
 * ```
 * scope.launch(start = CoroutineStart.ATOMIC) {
 *     // Do not move `NonCancellable` to the `context` argument of `launch`!
 *     withContext(NonCancellable) {
 *         // This code will run even if the parent coroutine is cancelled
 *     }
 * }
 * ```
 *
 * [CoroutineStart.ATOMIC] ensures that the new coroutine is not cancelled until it at least started to execute.
 * [NonCancellable] in [withContext] ensures that the code inside the block is executed even if the coroutine
 * created by [launch] is cancelled.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KmatrixKotlinx_coroutines_coreCoroutineScope
@required

/**
 * The context of this scope.
 *
 * The context represents various execution properties of the coroutines launched in this scope,
 * such as the [dispatcher][CoroutineDispatcher] or
 * the [procedure for handling exceptions without a propagation path][CoroutineExceptionHandler].
 * Except [GlobalScope], a [job][Job] instance for enforcing structured concurrency
 * must also be present in the context of every [CoroutineScope].
 * See the documentation of [CoroutineScope] for details.
 *
 * Accessing this property in general code is not recommended for any purposes
 * except accessing the [Job] instance for advanced usages.
 */
@property (readonly) id<KmatrixKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KmatrixKtor_client_coreHttpResponse : KmatrixBase <KmatrixKtor_httpHttpMessage, KmatrixKotlinx_coroutines_coreCoroutineScope>

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.call)
 */
@property (readonly) KmatrixKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * Provides a raw [ByteReadChannel] to the response content as it is read from the network.
 * This content can be still compressed or encoded.
 *
 * This content doesn't go through any interceptors from [HttpResponsePipeline].
 *
 * If you need to read the content as decoded bytes, use the [bodyAsChannel] method instead.
 *
 * This property produces a new channel every time it's accessed.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.rawContent)
 */
@property (readonly) id<KmatrixKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));

/**
 * [GMTDate] of the request start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.requestTime)
 */
@property (readonly) KmatrixKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));

/**
 * [GMTDate] of the response start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.responseTime)
 */
@property (readonly) KmatrixKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));

/**
 * The [HttpStatusCode] returned by the server. It includes both,
 * the [HttpStatusCode.description] and the [HttpStatusCode.value] (code).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.status)
 */
@property (readonly) KmatrixKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));

/**
 * HTTP version. Usually [HttpProtocolVersion.HTTP_1_1] or [HttpProtocolVersion.HTTP_2_0].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.version)
 */
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * The default instance of [Json] with default configuration.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface KmatrixKotlinx_serialization_jsonJsonDefault : KmatrixKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The default instance of [Json] with default configuration.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * Configuration of the current [Json] instance available through [Json.configuration]
 * and configured with [JsonBuilder] constructor.
 *
 * Can be used for debug purposes and for custom Json-specific serializers
 * via [JsonEncoder] and [JsonDecoder].
 *
 * Standalone configuration object is meaningless and can nor be used outside the
 * [Json], neither new [Json] instance can be created from it.
 *
 * Detailed description of each property is available in [JsonBuilder] class.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface KmatrixKotlinx_serialization_jsonJsonConfiguration : KmatrixBase

/** @suppress Dokka **/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property KmatrixKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL exceptionsWithDebugInfo __attribute__((swift_name("exceptionsWithDebugInfo")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<KmatrixKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmatrixKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KmatrixKotlinKClass>)kClass provider:(id<KmatrixKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmatrixKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KmatrixKotlinKClass>)kClass serializer:(id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KmatrixKotlinKClass>)baseClass actualClass:(id<KmatrixKotlinKClass>)actualClass actualSerializer:(id<KmatrixKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KmatrixKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KmatrixKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmatrixKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KmatrixKotlinKClass>)baseClass defaultSerializerProvider:(id<KmatrixKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmatrixKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmatrixKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KmatrixKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KmatrixKotlinKClass <KmatrixKotlinKDeclarationContainer, KmatrixKotlinKAnnotatedElement, KmatrixKotlinKClassifier>
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
__attribute__((swift_name("CoreSearchResultEvent.Companion")))
@interface KmatrixCoreSearchResultEventCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSearchResultEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResultContent")))
@interface KmatrixCoreSearchResultContent : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixCoreSearchResultContentCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="body")
*/
@property NSString * _Nullable body __attribute__((swift_name("body")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msgtype")
*/
@property NSString * _Nullable msgtype __attribute__((swift_name("msgtype")));
@end


/**
 * Provides data structure for associating a [String] with a [List] of Strings
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues)
 */
__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KmatrixKtor_utilsStringValues
@required

/**
 * Checks if the given [name] exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * Checks if the given [name] and [value] pair exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));

/**
 * Gets all entries from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.entries)
 */
- (NSSet<id<KmatrixKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));

/**
 * Iterates over all entries in this map and calls [body] for each pair
 *
 * Can be optimized in implementations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.forEach)
 */
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));

/**
 * Gets first value from the list of values associated with a [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.get)
 */
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * Gets all values associated with the [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.getAll)
 */
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));

/**
 * Checks if this map is empty
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.isEmpty)
 */
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));

/**
 * Gets all names from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.names)
 */
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));

/**
 * Specifies if map has case-sensitive or case-insensitive names
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.caseInsensitiveName)
 */
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end


/**
 * Represents HTTP headers as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Headers)
 */
__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KmatrixKtor_httpHeaders <KmatrixKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KmatrixKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KmatrixKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KmatrixKotlinCoroutineContextElement> _Nullable)getKey:(id<KmatrixKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KmatrixKotlinCoroutineContext>)minusKeyKey:(id<KmatrixKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KmatrixKotlinCoroutineContext>)plusContext:(id<KmatrixKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end


/**
 * A pair of a [request] and [response] for a specific [HttpClient].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall)
 *
 * @property client the client that executed the call.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KmatrixKtor_client_coreHttpClientCall : KmatrixBase <KmatrixKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(KmatrixKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(KmatrixKtor_client_coreHttpClient *)client requestData:(KmatrixKtor_client_coreHttpRequestData *)requestData responseData:(KmatrixKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.body)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 * @throws NullPointerException If content is `null`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(KmatrixKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.bodyNullable)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(KmatrixKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KmatrixKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.attributes)
 */
@property (readonly) id<KmatrixKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmatrixKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<KmatrixKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));

/**
 * The [request] sent by the client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.request)
 */
@property id<KmatrixKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));

/**
 * The [response] sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.response)
 */
@property KmatrixKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end


/**
 * Channel for asynchronous reading of sequences of bytes.
 * This is a **single-reader channel**.
 *
 * Operations on this channel cannot be invoked concurrently.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel)
 */
__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KmatrixKtor_ioByteReadChannel
@required

/**
 * Suspend the channel until it has [min] bytes or gets closed. Throws exception if the channel was closed with an
 * error. If there are bytes available in the channel, this function returns immediately.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel.awaitContent)
 *
 * @return return `false` eof is reached, otherwise `true`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(KmatrixBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(KmatrixKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) KmatrixKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<KmatrixKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KmatrixKtor_utilsGMTDate : KmatrixBase <KmatrixKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmatrixKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmatrixKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmatrixKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (KmatrixKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (KmatrixKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmatrixKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmatrixKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KmatrixKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KmatrixKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end


/**
 * Represents an HTTP status code and description.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode)
 *
 * @param value is a numeric code.
 * @param description is a free form description of a status.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KmatrixKtor_httpHttpStatusCode : KmatrixBase <KmatrixKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmatrixKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (KmatrixKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));

/**
 * Returns a copy of `this` code with a description changed to [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.description)
 */
- (KmatrixKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KmatrixKtor_httpHttpProtocolVersion : KmatrixBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (KmatrixKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KmatrixKotlinEnum<E> : KmatrixBase <KmatrixKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Defines which classes and objects should have their serial name included in the json as so-called class discriminator.
 *
 * Class discriminator is a JSON field added by kotlinx.serialization that has [JsonBuilder.classDiscriminator] as a key (`type` by default),
 * and class' serial name as a value (fully qualified name by default, can be changed with [SerialName] annotation).
 *
 * Class discriminator is important for serializing and deserializing [polymorphic class hierarchies](https://github.com/Kotlin/kotlinx.serialization/blob/master/docs/polymorphism.md#sealed-classes).
 * Default [ClassDiscriminatorMode.POLYMORPHIC] mode adds discriminator only to polymorphic classes.
 * This behavior can be changed to match various JSON schemas.
 *
 * @see JsonBuilder.classDiscriminator
 * @see JsonBuilder.classDiscriminatorMode
 * @see Polymorphic
 * @see PolymorphicSerializer
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface KmatrixKotlinx_serialization_jsonClassDiscriminatorMode : KmatrixKotlinEnum<KmatrixKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Defines which classes and objects should have their serial name included in the json as so-called class discriminator.
 *
 * Class discriminator is a JSON field added by kotlinx.serialization that has [JsonBuilder.classDiscriminator] as a key (`type` by default),
 * and class' serial name as a value (fully qualified name by default, can be changed with [SerialName] annotation).
 *
 * Class discriminator is important for serializing and deserializing [polymorphic class hierarchies](https://github.com/Kotlin/kotlinx.serialization/blob/master/docs/polymorphism.md#sealed-classes).
 * Default [ClassDiscriminatorMode.POLYMORPHIC] mode adds discriminator only to polymorphic classes.
 * This behavior can be changed to match various JSON schemas.
 *
 * @see JsonBuilder.classDiscriminator
 * @see JsonBuilder.classDiscriminatorMode
 * @see Polymorphic
 * @see PolymorphicSerializer
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmatrixKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) KmatrixKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) KmatrixKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (KmatrixKotlinArray<KmatrixKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmatrixKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Represents naming strategy — a transformer for serial names in a [Json] format.
 * Transformed serial names are used for both serialization and deserialization.
 * A naming strategy is always applied globally in the Json configuration builder
 * (see [JsonBuilder.namingStrategy]).
 *
 * Actual transformation happens in the [serialNameForJson] function.
 * It is possible to apply additional filtering inside the transformer using the `descriptor` parameter in [serialNameForJson].
 *
 * Original serial names are never used after transformation, so they are ignored in a Json input.
 * If the original serial name is present in the Json input but transformed is not,
 * [MissingFieldException] still would be thrown. If one wants to preserve the original serial name for deserialization,
 * one should use the [JsonNames] annotation, as its values are not transformed.
 *
 * ### Common pitfalls in conjunction with other Json features
 *
 * * Due to the nature of kotlinx.serialization framework, naming strategy transformation is applied to all properties regardless
 * of whether their serial name was taken from the property name or provided by @[SerialName] annotation.
 * Effectively, it means one cannot avoid transformation by explicitly specifying the serial name.
 *
 * * Collision of the transformed name with any other (transformed) properties serial names or any alternative names
 * specified with [JsonNames] will lead to a deserialization exception.
 *
 * * Naming strategies do not transform serial names of the types used for the polymorphism, as they always should be specified explicitly.
 * Values from [JsonClassDiscriminator] or global [JsonBuilder.classDiscriminator] also are not altered.
 *
 * ### Controversy about using global naming strategies
 *
 * Global naming strategies have one key trait that makes them a debatable and controversial topic:
 * They are very implicit. It means that by looking only at the definition of the class,
 * it is impossible to say which names it will have in the serialized form.
 * As a consequence, naming strategies are not friendly to refactorings. Programmer renaming `myId` to `userId` may forget
 * to rename `my_id`, and vice versa. Generally, any tools one can imagine work poorly with global naming strategies:
 * Find Usages/Rename in IDE, full-text search by grep, etc. For them, the original name and the transformed are two different things;
 * changing one without the other may introduce bugs in many unexpected ways.
 * The lack of a single place of definition, the inability to use automated tools, and more error-prone code lead
 * to greater maintenance efforts for code with global naming strategies.
 * However, there are cases where usage of naming strategies is inevitable, such as interop with an existing API or migrating a large codebase.
 * Therefore, one should carefully weigh the pros and cons before considering adding global naming strategies to an application.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol KmatrixKotlinx_serialization_jsonJsonNamingStrategy
@required

/**
 * Accepts an original [serialName] (defined by property name in the class or [SerialName] annotation) and returns
 * a transformed serial name which should be used for serialization and deserialization.
 *
 * Besides string manipulation operations, it is also possible to implement transformations that depend on the [descriptor]
 * and its element (defined by [elementIndex]) currently being serialized.
 * It is guaranteed that `descriptor.getElementName(elementIndex) == serialName`.
 * For example, one can choose different transformations depending on [SerialInfo]
 * annotations (see [SerialDescriptor.getElementAnnotations]) or element optionality (see [SerialDescriptor.isElementOptional]).
 *
 * Note that invocations of this function are cached for performance reasons.
 * Caching strategy is an implementation detail and should not be assumed as a part of the public API contract, as it may be changed in future releases.
 * Therefore, it is essential for this function to be pure: it should not have any side effects, and it should
 * return the same String for a given [descriptor], [elementIndex], and [serialName], regardless of the number of invocations.
 */
- (NSString *)serialNameForJsonDescriptor:(id<KmatrixKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResultContent.Companion")))
@interface KmatrixCoreSearchResultContentCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixCoreSearchResultContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol KmatrixKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KmatrixKotlinCoroutineContextElement <KmatrixKotlinCoroutineContext>
@required
@property (readonly) id<KmatrixKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KmatrixKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol KmatrixKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KmatrixKtor_ioCloseable <KmatrixKotlinAutoCloseable>
@required
@end


/**
 * A multiplatform asynchronous HTTP client that allows you to make requests, handle responses,
 * and extend its functionality with plugins such as authentication, JSON serialization, and more.
 *
 * # Creating client
 * To create a new client, you can call:
 * ```kotlin
 * val client = HttpClient()
 * ```
 * You can create as many clients as you need.
 *
 * If you no longer need the client, please consider closing it to release resources:
 * ```
 * client.close()
 * ```
 *
 * To learn more on how to create and configure an [HttpClient] see the tutorial page:
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * # Making API Requests
 * For every HTTP method (GET, POST, PUT, etc.), there is a corresponding function:
 * ```kotlin
 * val response: HttpResponse = client.get("https://ktor.io/")
 * val body = response.bodyAsText()
 * ```
 * See [Making HTTP requests](https://ktor.io/docs/client-requests.html) for more details.
 *
 * # Query Parameters
 * Add query parameters to your request using the `parameter` function:
 * ```kotlin
 * val response = client.get("https://google.com/search") {
 *     url {
 *         parameter("q", "REST API with Ktor")
 *     }
 * }
 * ```
 * For more information, refer to [Passing request parameters](https://ktor.io/docs/client-requests.html#parameters).
 *
 * # Adding Headers
 * Include headers in your request using the `headers` builder or the `header` function:
 * ```kotlin
 * val response = client.get("https://httpbin.org/bearer") {
 *     headers {
 *         append("Authorization", "Bearer your_token_here")
 *         append("Accept", "application/json")
 *     }
 * }
 * ```
 * Learn more at [Adding headers to a request](https://ktor.io/docs/client-requests.html#headers).
 *
 * # JSON Serialization
 * Add dependencies:
 * - io.ktor:ktor-client-content-negotiation:3.+
 * - io.ktor:ktor-serialization-kotlinx-json:3.+
 * Add Gradle plugin:
 * ```
 * plugins {
 *     kotlin("plugin.serialization")
 * }
 * ```
 *
 * Send and receive JSON data by installing the `ContentNegotiation` plugin with `kotlinx.serialization`:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 *
 * @Serializable
 * data class MyRequestType(val someData: String)
 *
 * @Serializable
 * data class MyResponseType(val someResponseData: String)
 *
 * val response: MyResponseType = client.post("https://api.example.com/data") {
 *     contentType(ContentType.Application.Json)
 *     setBody(MyRequestType(someData = "value"))
 * }.body()
 * ```
 * See [Serializing JSON data](https://ktor.io/docs/client-serialization.html) for maven configuration and other details.
 *
 * # Submitting Forms
 * Submit form data using `FormDataContent` or the `submitForm` function:
 * ```kotlin
 * // Using FormDataContent
 * val response = client.post("https://example.com/submit") {
 *     setBody(FormDataContent(Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }))
 * }
 *
 * // Or using submitForm
 * val response = client.submitForm(
 *     url = "https://example.com/submit",
 *     formParameters = Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }
 * )
 * ```
 * More information is available at [Submitting form parameters](https://ktor.io/docs/client-requests.html#form_parameters).
 *
 * # Handling Authentication
 * Add dependency: io.ktor:ktor-client-auth:3.+
 *
 * Use the `Auth` plugin to handle various authentication schemes like Basic or Bearer token authentication:
 * ```kotlin
 * val client = HttpClient {
 *     install(Auth) {
 *         bearer {
 *             loadTokens {
 *                 BearerTokens(accessToken = "your_access_token", refreshToken = "your_refresh_token")
 *             }
 *         }
 *     }
 * }
 *
 * val response = client.get("https://api.example.com/protected")
 * ```
 * Refer to [Client authentication](https://ktor.io/docs/client-auth.html) for more details.
 *
 * # Setting Timeouts and Retries
 * Configure timeouts and implement retry logic for your requests:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpTimeout) {
 *         requestTimeoutMillis = 10000
 *         connectTimeoutMillis = 5000
 *         socketTimeoutMillis = 15000
 *     }
 * }
 * ```
 *
 * For the request timeout:
 * ```kotlin
 * client.get("") {
 *     timeout {
 *         requestTimeoutMillis = 1000
 *     }
 * }
 * ```
 * See [Timeout](https://ktor.io/docs/client-timeout.html) for more information.
 *
 * # Handling Cookies
 *
 * Manage cookies automatically by installing the `HttpCookies` plugin:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpCookies) {
 *         storage = AcceptAllCookiesStorage()
 *     }
 * }
 *
 * // Accessing cookies
 * val cookies: List<Cookie> = client.cookies("https://example.com")
 * ```
 * Learn more at [Cookies](https://ktor.io/docs/client-cookies.html).
 *
 * # Uploading Files
 * Upload files using multipart/form-data requests:
 * ```kotlin
 * client.submitFormWithBinaryData(
 *      url = "https://example.com/upload",
 *      formData = formData {
 *          append("description", "File upload example")
 *          append("file", {
 *              File("path/to/file.txt").readChannel()
 *          })
 *      }
 *  )
 *
 * See [Uploading data](https://ktor.io/docs/client-requests.html#upload_file) for details.
 *
 * # Using WebSockets
 *
 * Communicate over WebSockets using the `webSocket` function:
 * ```kotlin
 * client.webSocket("wss://echo.websocket.org") {
 *     send(Frame.Text("Hello, WebSocket!"))
 *     val frame = incoming.receive()
 *     if (frame is Frame.Text) {
 *         println("Received: ${frame.readText()}")
 *     }
 * }
 * ```
 * Learn more at [Client WebSockets](https://ktor.io/docs/client-websockets.html).
 *
 * # Error Handling
 * Handle exceptions and HTTP error responses gracefully:
 * val client = HttpClient {
 *     HttpResponseValidator {
 *         validateResponse { response ->
 *             val statusCode = response.status.value
 *             when (statusCode) {
 *                 in 300..399 -> error("Redirects are not allowed")
 *             }
 *         }
 *     }
 * }
 * See [Error handling](https://ktor.io/docs/client-response-validation.html) for more information.
 *
 * # Configuring SSL/TLS
 *
 * Customize SSL/TLS settings for secure connections is engine-specific. Please refer to the following page for
 * the details: [Client SSL/TLS](https://ktor.io/docs/client-ssl.html).
 *
 * # Using Proxies
 * Route requests through an HTTP or SOCKS proxy:
 * ```kotlin
 * val client = HttpClient() {
 *     engine {
 *         proxy = ProxyBuilder.http("http://proxy.example.com:8080")
 *         // For a SOCKS proxy:
 *         // proxy = ProxyBuilder.socks(host = "proxy.example.com", port = 1080)
 *     }
 * }
 * ```
 * See [Using a proxy](https://ktor.io/docs/client-proxy.html) for details.
 *
 * # Streaming Data
 *
 * Stream large data efficiently without loading it entirely into memory.
 *
 * Stream request:
 * ```kotlin
 * val response = client.post("https://example.com/upload") {
 *      setBody(object: OutgoingContent.WriteChannelContent() {
 *          override suspend fun writeTo(channel: ByteWriteChannel) {
 *              repeat(1000) {
 *                  channel.writeString("Hello!")
 *              }
 *          }
 *      })
 * }
 * ```
 *
 * Stream response:
 * ```kotlin
 * client.prepareGet("https://example.com/largefile.zip").execute { response ->
 *     val channel: ByteReadChannel = response.bodyAsChannel()
 *
 *     while (!channel.exhausted()) {
 *         val chunk = channel.readBuffer()
 *         // ...
 *     }
 * }
 * ```
 * Learn more at [Streaming data](https://ktor.io/docs/client-responses.html#streaming).
 *
 * # Using SSE
 * Server-Sent Events (SSE) is a technology that allows a server to continuously push events to a client over an HTTP
 * connection. It's particularly useful in cases where the server needs to send event-based updates without requiring
 * the client to repeatedly poll the server.
 *
 * Install the plugin:
 * ```kotlin
 * val client = HttpClient(CIO) {
 *     install(SSE)
 * }
 * ```
 *
 * ```
 * client.sse(host = "0.0.0.0", port = 8080, path = "/events") {
 *     while (true) {
 *         for (event in incoming) {
 *             println("Event from server:")
 *             println(event)
 *         }
 *     }
 * }
 * ```
 *
 * Visit [Using SSE](https://ktor.io/docs/client-server-sent-events.html#install_plugin) to learn more.
 *
 * # Customizing a client with plugins
 * To extend out-of-the-box functionality, you can install plugins for a Ktor client:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 * ```
 *
 * There are many plugins available out of the box, and you can write your own. See
 * [Create custom client plugins](https://ktor.io/docs/client-custom-plugins.html) to learn more.
 *
 * # Service Loader and Default Engine
 * On JVM, calling `HttpClient()` without specifying an engine uses a service loader mechanism to
 * determine the appropriate default engine. This can introduce a performance overhead, especially on
 * slower devices, such as Android.
 *
 * **Performance Note**: If you are targeting platforms where initialization speed is critical,
 * consider explicitly specifying an engine to avoid the service loader lookup.
 *
 * Example with manual engine specification:
 * ```
 * val client = HttpClient(Apache5) // Explicitly uses Apache5 engine, bypassing service loader
 * ```
 *
 * By directly setting the engine (e.g., `Apache5`, `OkHttp`), you can optimize startup performance
 * by preventing the default service loader mechanism.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KmatrixKtor_client_coreHttpClient : KmatrixBase <KmatrixKotlinx_coroutines_coreCoroutineScope, KmatrixKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KmatrixKtor_client_coreHttpClientEngine>)engine userConfig:(KmatrixKtor_client_coreHttpClientConfig<KmatrixKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));

/**
 * Initiates the shutdown process for the `HttpClient`. This is a non-blocking call, which
 * means it returns immediately and begins the client closure in the background.
 *
 * ## Usage
 * ```
 * val client = HttpClient()
 * client.close()
 * client.coroutineContext.job.join() // Waits for complete termination if necessary
 * ```
 *
 * ## Important Notes
 * - **Non-blocking**: `close()` only starts the closing process and does not wait for it to complete.
 * - **Coroutine Context**: To wait for all client resources to be freed, use `client.coroutineContext.job.join()`
 *   or `client.coroutineContext.cancel()` to terminate ongoing tasks.
 * - **Manual Engine Management**: If a custom `engine` was manually created, it must be closed explicitly
 *   after calling `client.close()` to release all resources.
 *
 * Example with custom engine management:
 * ```
 * val engine = HttpClientEngine() // Custom engine instance
 * val client = HttpClient(engine)
 *
 * client.close()
 * engine.close() // Ensure manually created engine is also closed
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.close)
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Returns a new [HttpClient] by copying this client's configuration
 * and additionally configured by the [block] parameter.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.config)
 */
- (KmatrixKtor_client_coreHttpClient *)configBlock:(void (^)(KmatrixKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 * Checks if the specified [capability] is supported by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.isSupported)
 */
- (BOOL)isSupportedCapability:(id<KmatrixKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Typed attributes used as a lightweight container for this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.attributes)
 */
@property (readonly) id<KmatrixKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KmatrixKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KmatrixKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));

/**
 * Provides access to the client's engine configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.engineConfig)
 */
@property (readonly) KmatrixKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));

/**
 * Provides access to the events of the client's lifecycle.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.monitor)
 */
@property (readonly) KmatrixKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));

/**
 * A pipeline used for receiving a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.receivePipeline)
 */
@property (readonly) KmatrixKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));

/**
 * A pipeline used for processing all requests sent by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.requestPipeline)
 */
@property (readonly) KmatrixKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));

/**
 * A pipeline used for processing all responses sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.responsePipeline)
 */
@property (readonly) KmatrixKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));

/**
 * A pipeline used for sending a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.sendPipeline)
 */
@property (readonly) KmatrixKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end


/**
 * Actual data of the [HttpRequest], including [url], [method], [headers], [body] and [executionContext].
 * Built by [HttpRequestBuilder].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KmatrixKtor_client_coreHttpRequestData : KmatrixBase
- (instancetype)initWithUrl:(KmatrixKtor_httpUrl *)url method:(KmatrixKtor_httpHttpMethod *)method headers:(id<KmatrixKtor_httpHeaders>)headers body:(KmatrixKtor_httpOutgoingContent *)body executionContext:(id<KmatrixKotlinx_coroutines_coreJob>)executionContext attributes:(id<KmatrixKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));

/**
 * Retrieve extension by its key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<KmatrixKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmatrixKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmatrixKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KmatrixKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KmatrixKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmatrixKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmatrixKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Data prepared for [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpResponseData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KmatrixKtor_client_coreHttpResponseData : KmatrixBase
- (instancetype)initWithStatusCode:(KmatrixKtor_httpHttpStatusCode *)statusCode requestTime:(KmatrixKtor_utilsGMTDate *)requestTime headers:(id<KmatrixKtor_httpHeaders>)headers version:(KmatrixKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KmatrixKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KmatrixKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KmatrixKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmatrixKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmatrixKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface KmatrixKtor_client_coreHttpClientCallCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Ktor type information.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.reflect.TypeInfo)
 *
 * @property type Source KClass<*>
 * @property kotlinType Kotlin reified type with all generic type parameters.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface KmatrixKtor_utilsTypeInfo : KmatrixBase
- (instancetype)initWithType:(id<KmatrixKotlinKClass>)type kotlinType:(id<KmatrixKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<KmatrixKotlinKClass>)type reifiedType:(id<KmatrixKotlinKType>)reifiedType kotlinType:(id<KmatrixKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmatrixKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KmatrixKotlinKClass> type __attribute__((swift_name("type")));
@end


/**
 * Map of attributes accessible by [AttributeKey] in a typed manner
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes)
 */
__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KmatrixKtor_utilsAttributes
@required

/**
 * Gets a value of the attribute for the specified [key], or calls supplied [block] to compute its value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.computeIfAbsent)
 */
- (id)computeIfAbsentKey:(KmatrixKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));

/**
 * Checks if an attribute with the specified [key] exists
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.contains)
 */
- (BOOL)containsKey:(KmatrixKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));

/**
 * Gets a value of the attribute for the specified [key], or throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.get)
 */
- (id)getKey_:(KmatrixKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));

/**
 * Gets a value of the attribute for the specified [key], or return `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.getOrNull)
 */
- (id _Nullable)getOrNullKey:(KmatrixKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.put)
 */
- (void)putKey:(KmatrixKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));

/**
 * Removes an attribute with the specified [key]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.remove)
 */
- (void)removeKey:(KmatrixKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.set)
 */
- (void)setKey:(KmatrixKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.take)
 */
- (id)takeKey:(KmatrixKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, returns `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.takeOrNull)
 */
- (id _Nullable)takeOrNullKey:(KmatrixKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));

/**
 * Returns [List] of all [AttributeKey] instances in this map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.allKeys)
 */
@property (readonly) NSArray<KmatrixKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end


/**
 * A request for [HttpClient], first part of [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest)
 */
__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KmatrixKtor_client_coreHttpRequest <KmatrixKtor_httpHttpMessage, KmatrixKotlinx_coroutines_coreCoroutineScope>
@required

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.attributes)
 */
@property (readonly) id<KmatrixKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.call)
 */
@property (readonly) KmatrixKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * An [OutgoingContent] representing the request body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.content)
 */
@property (readonly) KmatrixKtor_httpOutgoingContent *content __attribute__((swift_name("content")));

/**
 * The [HttpMethod] or HTTP VERB used for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.method)
 */
@property (readonly) KmatrixKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * The [Url] representing the endpoint and the uri for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.url)
 */
@property (readonly) KmatrixKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Supplies a stream of bytes. RawSource is a base interface for `kotlinx-io` data suppliers.
 *
 * The interface should be implemented to read data from wherever it's located: from the network, storage,
 * or a buffer in memory. Sources may be layered to transform supplied data, such as to decompress, decrypt,
 * or remove protocol framing.
 *
 * Most applications shouldn't operate on a raw source directly, but rather on a buffered [Source] which
 * is both more efficient and more convenient. Use [buffered] to wrap any raw source with a buffer.
 *
 * Implementors should abstain from throwing exceptions other than those that are documented for RawSource methods.
 *
 * ### Thread-safety guarantees
 *
 * [RawSource] implementations are not required to be thread safe.
 * However, if an implementation provides some thread safety guarantees, it is recommended to explicitly document them.
 *
 * @sample kotlinx.io.samples.RC4SourceSample.rc4
 */
__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol KmatrixKotlinx_io_coreRawSource <KmatrixKotlinAutoCloseable>
@required

/**
 * Removes at least 1, and up to [byteCount] bytes from this source and appends them to [sink].
 * Returns the number of bytes read, or -1 if this source is exhausted.
 *
 * @param sink the destination to write the data from this source.
 * @param byteCount the number of bytes to read.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readAtMostToSink
 */
- (int64_t)readAtMostToSink:(KmatrixKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end


/**
 * A source that facilitates typed data reads and keeps a buffer internally so that callers can read chunks of data
 * without requesting it from a downstream on every call.
 *
 * [Source] is the main `kotlinx-io` interface to read data in client's code,
 * any [RawSource] could be converted into [Source] using [RawSource.buffered].
 *
 * Depending on the kind of downstream and the number of bytes read, buffering may improve the performance by hiding
 * the latency of small reads.
 *
 * The buffer is refilled on reads as necessary, but it is also possible to ensure it contains enough data
 * using [require] or [request].
 * [Sink] also allows skipping unneeded prefix of data using [skip] and
 * provides look ahead into incoming data, buffering as much as necessary, using [peek].
 *
 * Source's read* methods have different guarantees of how much data will be consumed from the source
 * and what to expect in case of error.
 *
 * ### Read methods' behavior and naming conventions
 *
 * Unless stated otherwise, all read methods consume the exact number of bytes
 * requested (or the number of bytes required to represent a value of a requested type).
 * If a source contains fewer bytes than requested, these methods will throw an exception.
 *
 * Methods reading up to requested number of bytes are named as `readAtMost`
 * in contrast to methods reading exact number of bytes, which don't have `AtMost` suffix in their names.
 * If a source contains fewer bytes than requested, these methods will not treat it as en error and will return
 * gracefully.
 *
 * Methods returning a value as a result are named `read<Type>`, like [readInt] or [readByte].
 * These methods don't consume source's content in case of an error.
 *
 * Methods reading data into a consumer supplied as one of its arguments are named `read*To`,
 * like [readTo] or [readAtMostTo]. These methods consume a source even when an error occurs.
 *
 * Methods moving all data from a source to some other sink are named `transferTo`, like [transferTo].
 *
 * It is recommended to follow the same naming convention for Source extensions.
 *
 * ### Thread-safety guarantees
 *
 * Until stated otherwise, [Source] implementations are not thread safe.
 * If a [Source] needs to be accessed from multiple threads, an additional synchronization is required.
 */
__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol KmatrixKotlinx_io_coreSource <KmatrixKotlinx_io_coreRawSource>
@required

/**
 * Returns true if there are no more bytes in this source.
 *
 * The call of this method will block until there are bytes to read or the source is definitely exhausted.
 *
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.exhausted
 */
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * Returns a new [Source] that can read data from this source without consuming it.
 * The returned source becomes invalid once this source is next read or closed.
 *
 * Peek could be used to lookahead and read the same data multiple times.
 *
 * If peek source needs to access more data that this [Source] has in its buffer,
 * more data will be requested from the underlying source and on success,
 * it'll be added to the buffer of this [Source].
 * If the underlying source was exhausted or some error occurred on attempt to fill the buffer,
 * a corresponding exception will be thrown.
 *
 * @throws IllegalStateException when the source is closed.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.peekSample
 */
- (id<KmatrixKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));

/**
 * Removes up to `endIndex - startIndex` bytes from this source, copies them into [sink] subrange starting at
 * [startIndex] and ending at [endIndex], and returns the number of bytes read, or -1 if this source is exhausted.
 *
 * @param sink the array to which data will be written from this source.
 * @param startIndex the startIndex (inclusive) of the [sink] subrange to read data into, 0 by default.
 * @param endIndex the endIndex (exclusive) of the [sink] subrange to read data into, `sink.size` by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of range of [sink] array indices.
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readAtMostToByteArray
 */
- (int32_t)readAtMostToSink:(KmatrixKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));

/**
 * Removes a byte from this source and returns it.
 *
 * @throws EOFException when there are no more bytes to read.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readByte
 */
- (int8_t)readByte __attribute__((swift_name("readByte()")));

/**
 * Removes four bytes from this source and returns an integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read an int value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readInt
 */
- (int32_t)readInt __attribute__((swift_name("readInt()")));

/**
 * Removes eight bytes from this source and returns a long integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read a long value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readLong
 */
- (int64_t)readLong __attribute__((swift_name("readLong()")));

/**
 * Removes two bytes from this source and returns a short integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read a short value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readShort
 */
- (int16_t)readShort __attribute__((swift_name("readShort()")));

/**
 * Removes exactly [byteCount] bytes from this source and writes them to [sink].
 *
 * @param sink the sink to which data will be written from this source.
 * @param byteCount the number of bytes that should be written into [sink]
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws EOFException when the requested number of bytes cannot be read.
 * @throws IllegalStateException when the source or [sink] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readSourceToSink
 */
- (void)readToSink:(id<KmatrixKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));

/**
 * Attempts to fill the buffer with at least [byteCount] bytes of data from the underlying source
 * and returns a value indicating if the requirement was successfully fulfilled.
 *
 * `false` value returned by this method indicates that the underlying source was exhausted before
 * filling the buffer with [byteCount] bytes of data.
 *
 * @param byteCount the number of bytes that the buffer should contain.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.request
 */
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));

/**
 * Attempts to fill the buffer with at least [byteCount] bytes of data from the underlying source
 * and throw [EOFException] when the source is exhausted before fulfilling the requirement.
 *
 * If the buffer already contains required number of bytes then there will be no requests to
 * the underlying source.
 *
 * @param byteCount the number of bytes that the buffer should contain.
 *
 * @throws EOFException when the source is exhausted before the required bytes count could be read.
 * @throws IllegalStateException when the source is closed.
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.require
 */
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));

/**
 * Reads and discards [byteCount] bytes from this source.
 *
 * @param byteCount the number of bytes to be skipped.
 *
 * @throws EOFException when the source is exhausted before the requested number of bytes can be skipped.
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.skip
 */
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));

/**
 * Removes all bytes from this source, writes them to [sink], and returns the total number of bytes
 * written to [sink].
 *
 * Return 0 if this source is exhausted.
 *
 * @param sink the sink to which data will be written from this source.
 *
 * @throws IllegalStateException when the source or [sink] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.transferTo
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (int64_t)transferToSink:(id<KmatrixKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * This source's internal buffer. It contains data fetched from the downstream, but not yet consumed by the upstream.
 *
 * Incorrect use of the buffer may cause data loss or unexpected data being read by the upstream.
 * Consider using alternative APIs to read data from the source, if possible:
 * - use [peek] for lookahead into a source;
 * - implement [RawSource] and wrap a downstream source into it to intercept data being read.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmatrixKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end


/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KmatrixKtor_utilsWeekDay : KmatrixKotlinEnum<KmatrixKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmatrixKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KmatrixKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KmatrixKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KmatrixKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KmatrixKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KmatrixKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KmatrixKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KmatrixKotlinArray<KmatrixKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmatrixKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KmatrixKtor_utilsMonth : KmatrixKotlinEnum<KmatrixKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmatrixKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KmatrixKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KmatrixKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KmatrixKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KmatrixKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KmatrixKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KmatrixKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KmatrixKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KmatrixKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KmatrixKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KmatrixKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KmatrixKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KmatrixKotlinArray<KmatrixKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmatrixKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface KmatrixKtor_utilsGMTDateCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * An instance of [GMTDate] corresponding to the epoch beginning
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate.Companion.START)
 */
@property (readonly) KmatrixKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface KmatrixKtor_httpHttpStatusCodeCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpStatusCode] with the given numeric value.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.fromValue)
 */
- (KmatrixKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) KmatrixKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));

/**
 * All known status codes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.allStatusCodes)
 */
@property (readonly) NSArray<KmatrixKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface KmatrixKtor_httpHttpProtocolVersionCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpProtocolVersion] from the given parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.fromValue)
 */
- (KmatrixKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));

/**
 * Create an instance of [HttpProtocolVersion] from http string representation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.parse)
 */
- (KmatrixKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));

/**
 * HTTP/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_0)
 */
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));

/**
 * HTTP/1.1 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_1)
 */
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));

/**
 * HTTP/2.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_2_0)
 */
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));

/**
 * HTTP/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_3_0)
 */
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *HTTP_3_0 __attribute__((swift_name("HTTP_3_0")));

/**
 * QUIC/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.QUIC)
 */
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));

/**
 * SPDY/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.SPDY_3)
 */
@property (readonly) KmatrixKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KmatrixKotlinEnumCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Serves as the base interface for an [HttpClient]'s engine.
 *
 * An `HttpClientEngine` represents the underlying network implementation that
 * performs HTTP requests and handles responses.
 * Developers can implement this interface to create custom engines for use with [HttpClient].
 *
 * This interface provides a set of properties and methods that define the
 * contract for configuring, executing, and managing HTTP requests within the engine.
 *
 * For a base implementation that handles common engine functionality, see [HttpClientEngineBase].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KmatrixKtor_client_coreHttpClientEngine <KmatrixKotlinx_coroutines_coreCoroutineScope, KmatrixKtor_ioCloseable>
@required

/**
 * Executes an HTTP request and produces an HTTP response.
 *
 * This function takes [HttpRequestData], which contains all details of the HTTP request,
 * and returns [HttpResponseData] with the server's response, including headers, status code, and body.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.execute)
 *
 * @param data The [HttpRequestData] representing the request to be executed.
 * @return An [HttpResponseData] object containing the server's response.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KmatrixKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KmatrixKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));

/**
 * Installs the engine into an [HttpClient].
 *
 * This method is called when the engine is being set up within an `HttpClient`.
 * Use it to register interceptors, validate configuration, or prepare the engine
 * for use with the client.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.install)
 *
 * @param client The [HttpClient] instance to which the engine is being installed.
 */
- (void)installClient:(KmatrixKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Provides access to the engine's configuration via [HttpClientEngineConfig].
 *
 * The [config] object stores user-defined parameters or settings that control
 * how the engine operates. When creating a custom engine, this property
 * should return the specific configuration implementation.
 *
 * Example:
 * ```kotlin
 * override val config: HttpClientEngineConfig = CustomEngineConfig()
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.config)
 */
@property (readonly) KmatrixKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));

/**
 * Specifies the [CoroutineDispatcher] for I/O operations in the engine.
 *
 * This dispatcher is used for all network-related operations, such as
 * sending requests and receiving responses.
 * By default, it should be optimized for I/O tasks.
 *
 * Example:
 * ```kotlin
 * override val dispatcher: CoroutineDispatcher = Dispatchers.IO
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.dispatcher)
 */
@property (readonly) KmatrixKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Specifies the set of capabilities supported by this HTTP client engine.
 *
 * Capabilities provide a mechanism for plugins and other components to
 * determine whether the engine supports specific features such as timeouts,
 * WebSocket communication, HTTP/2, HTTP/3, or other advanced networking
 * capabilities. This allows seamless integration of features based on the
 * engine's functionality.
 *
 * Each capability is represented as an instance of [HttpClientEngineCapability],
 * which can carry additional metadata or configurations for the capability.
 *
 * Example:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(
 *     WebSocketCapability,
 *     Http2Capability,
 *     TimeoutCapability
 * )
 * ```
 *
 * **Usage in Plugins**:
 * Plugins can check if the engine supports a specific capability before
 * applying behavior:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket-specific settings
 * }
 * ```
 *
 * When implementing a custom engine, ensure this property accurately reflects
 * the engine's abilities to avoid unexpected plugin behavior or runtime errors.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.supportedCapabilities)
 */
@property (readonly) NSSet<id<KmatrixKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end


/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KmatrixKtor_client_coreHttpClientEngineConfig : KmatrixBase

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Allow specifying the coroutine dispatcher to use for IO operations.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.dispatcher)
 */
@property KmatrixKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Enables HTTP pipelining advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.pipelining)
 */
@property BOOL pipelining __attribute__((swift_name("pipelining")));

/**
 * Specifies a proxy address to use.
 * Uses a system proxy by default.
 *
 * You can learn more from [Proxy](https://ktor.io/docs/proxy.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.proxy)
 */
@property KmatrixKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));

/**
 * Specifies network threads count advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.threadsCount)
 */
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end


/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KmatrixKtor_client_coreHttpClientConfig<T> : KmatrixBase

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Clones this [HttpClientConfig] by duplicating all the [plugins] and [customInterceptors].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.clone)
 */
- (KmatrixKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));

/**
 * A builder for configuring engine-specific settings in [HttpClientEngineConfig],
 * such as dispatcher, thread count, proxy, and more.
 *
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>
 *     engine { // CIOEngineConfig.() -> Unit
 *         proxy = ProxyBuilder.http("proxy.example.com", 8080)
 *     }
 * ```
 *
 * You can learn more from [Engines](https://ktor.io/docs/http-client-engines.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.engine)
 */
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));

/**
 * Applies all the installed [plugins] and [customInterceptors] from this configuration
 * into the specified [client].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installClient:(KmatrixKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Installs the specified [plugin] and optionally configures it using the [configure] block.
 *
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         // configuration block
 *         json()
 *     }
 * }
 * ```
 *
 * If the plugin is already installed, the configuration block will be applied to the existing configuration class.
 *
 * Learn more from [Plugins](https://ktor.io/docs/http-client-plugins.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installPlugin:(id<KmatrixKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));

/**
 * Installs an interceptor defined by [block].
 * The [key] parameter is used as a unique name, that also prevents installing duplicated interceptors.
 *
 * If the [key] is already used, the new interceptor will replace the old one.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installKey:(NSString *)key block:(void (^)(KmatrixKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));

/**
 * Installs the specified [plugin] and optionally configures it using the [configure] block.
 * If the plugin is already installed, the configuration block will replace the existing configuration class.
 *
 * ```kotlin
 * val client = HttpClient {
 *     installOrReplace(ContentNegotiation) {
 *         // configuration block
 *         json()
 *     }
 * }
 * ```
 *
 * Learn more from [Plugins](https://ktor.io/docs/http-client-plugins.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.installOrReplace)
 */
- (void)installOrReplacePlugin:(id<KmatrixKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("installOrReplace(plugin:configure:)")));

/**
 * Installs the plugin from the [other] client's configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.plusAssign)
 */
- (void)plusAssignOther:(KmatrixKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));

/**
 * Development mode is no longer required all functionality is enabled by default. The property is safe to remove.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.developmentMode)
 */
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));

/**
 * Terminates [HttpClient.receivePipeline] if the status code is not successful (>=300).
 * Learn more from [Response validation](https://ktor.io/docs/response-validation.html).
 *
 * For more details, see the [HttpCallValidator] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.expectSuccess)
 */
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));

/**
 * Specifies whether the client redirects to URLs provided in the `Location` header.
 * You can disable redirections by setting this property to `false`.
 *
 * For an advanced redirection configuration, use the [HttpRedirect] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.followRedirects)
 */
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));

/**
 * Enables body transformations for many common types like [String], [ByteArray], [ByteReadChannel], etc.
 * These transformations are applied to the request and response bodies.
 *
 * The transformers will be used when the response body is received with a type:
 * ```kotlin
 * val client = HttpClient()
 * val bytes = client.get("https://ktor.io")
 *                   .body<ByteArray>()
 * ```
 *
 * This flag is enabled by default.
 * You might want to disable it if you want to write your own transformers or handle body manually.
 *
 * For more details, see the [defaultTransformers] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.useDefaultTransformers)
 */
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end


/**
 * Represents a capability that an [HttpClientEngine] can support, with [T] representing the type
 * of configuration or metadata associated with the capability.
 *
 * Capabilities are used to declare optional features or behaviors that an engine may support,
 * such as WebSocket communication, HTTP/2, or custom timeouts. They enable plugins and request
 * builders to configure engine-specific functionality by associating a capability with a
 * specific configuration.
 *
 * Capabilities can be set on a per-request basis using the `HttpRequestBuilder.setCapability` method,
 * allowing users to configure engine-specific behavior for individual requests.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineCapability)
 *
 * @param T The type of the configuration or metadata associated with this capability.
 *
 * Example:
 * Suppose you have a custom capability for WebSocket support that requires a specific configuration:
 * ```kotlin
 * object WebSocketCapability : HttpClientEngineCapability<WebSocketConfig>
 *
 * data class WebSocketConfig(val maxFrameSize: Int, val pingIntervalMillis: Long)
 * ```
 *
 * Setting a capability in a request:
 * ```kotlin
 * client.request {
 *     setCapability(WebSocketCapability, WebSocketConfig(
 *         maxFrameSize = 65536,
 *         pingIntervalMillis = 30000
 *     ))
 * }
 * ```
 *
 * Engine Example:
 * A custom engine implementation can declare support for specific capabilities in its `supportedCapabilities` property:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(WebSocketCapability)
 * ```
 *
 * Plugin Integration Example:
 * Plugins use capabilities to interact with engine-specific features. For example:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket behavior if supported by the engine
 * }
 * ```
 *
 * When creating a custom capability:
 * - Define a singleton object implementing `HttpClientEngineCapability`.
 * - Use the type parameter [T] to provide the associated configuration type or metadata.
 * - Ensure that engines supporting the capability handle the associated configuration properly.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KmatrixKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface KmatrixKtor_eventsEvents : KmatrixBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Raises the event specified by [definition] with the [value] and calls all handlers.
 *
 * Handlers are called in order of subscriptions.
 * If some handler throws an exception, all remaining handlers will still run. The exception will eventually be re-thrown.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.raise)
 */
- (void)raiseDefinition:(KmatrixKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));

/**
 * Subscribe [handler] to an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.subscribe)
 */
- (id<KmatrixKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(KmatrixKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));

/**
 * Unsubscribe [handler] from an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.unsubscribe)
 */
- (void)unsubscribeDefinition:(KmatrixKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end


/**
 * Represents an execution pipeline for asynchronous extensible computations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline)
 */
__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KmatrixKtor_utilsPipeline<TSubject, TContext> : KmatrixBase
- (instancetype)initWithPhases:(KmatrixKotlinArray<KmatrixKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmatrixKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmatrixKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));

/**
 * Adds [phase] to the end of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.addPhase)
 */
- (void)addPhasePhase:(KmatrixKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));

/**
 * Invoked after an interceptor has been installed
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.afterIntercepted)
 */
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * Executes this pipeline in the given [context] and with the given [subject]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.execute)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));

/**
 * Inserts [phase] after the [reference] phase. If there are other phases inserted after [reference], then [phase]
 * will be inserted after them.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(a)
 * pipeline.insertPhaseAfter(a, b)
 * pipeline.insertPhaseAfter(a, c)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseAfter)
 */
- (void)insertPhaseAfterReference:(KmatrixKtor_utilsPipelinePhase *)reference phase:(KmatrixKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));

/**
 * Inserts [phase] before the [reference] phase.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(c)
 * pipeline.insertPhaseBefore(c, a)
 * pipeline.insertPhaseBefore(c, b)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseBefore)
 */
- (void)insertPhaseBeforeReference:(KmatrixKtor_utilsPipelinePhase *)reference phase:(KmatrixKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));

/**
 * Adds [block] to the [phase] of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.intercept)
 */
- (void)interceptPhase:(KmatrixKtor_utilsPipelinePhase *)phase block:(id<KmatrixKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<KmatrixKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(KmatrixKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));

/**
 * Merges another pipeline into this pipeline, maintaining relative phases order
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.merge)
 */
- (void)mergeFrom:(KmatrixKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(KmatrixKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));

/**
 * Reset current pipeline from other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.resetFrom)
 */
- (void)resetFromFrom:(KmatrixKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Provides common place to store pipeline attributes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.attributes)
 */
@property (readonly) id<KmatrixKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * Indicated if debug mode is enabled. In debug mode users will get more details in the stacktrace.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.developmentMode)
 */
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));

/**
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.isEmpty)
 *
 * @return `true` if there are no interceptors installed regardless number of phases
 */
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));

/**
 * Phases of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.items)
 */
@property (readonly) NSArray<KmatrixKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end


/**
 * [HttpClient] Pipeline used for receiving [HttpResponse] without any processing.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KmatrixKtor_client_coreHttpReceivePipeline : KmatrixKtor_utilsPipeline<KmatrixKtor_client_coreHttpResponse *, KmatrixKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmatrixKotlinArray<KmatrixKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmatrixKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmatrixKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for executing [HttpRequest].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KmatrixKtor_client_coreHttpRequestPipeline : KmatrixKtor_utilsPipeline<id, KmatrixKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmatrixKotlinArray<KmatrixKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmatrixKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmatrixKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * [HttpClient] Pipeline used for executing [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KmatrixKtor_client_coreHttpResponsePipeline : KmatrixKtor_utilsPipeline<KmatrixKtor_client_coreHttpResponseContainer *, KmatrixKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmatrixKotlinArray<KmatrixKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmatrixKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmatrixKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for sending [HttpRequest] to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KmatrixKtor_client_coreHttpSendPipeline : KmatrixKtor_utilsPipeline<id, KmatrixKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmatrixKotlinArray<KmatrixKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmatrixKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmatrixKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol KmatrixKtor_ioJvmSerializable
@required
@end


/**
 * Represents an immutable URL
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url)
 *
 * @property protocol
 * @property host name without port (domain)
 * @property port the specified port or protocol default port
 * @property specifiedPort port number that was specified to override protocol's default
 * @property encodedPath encoded path without query string
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property user username part of URL
 * @property password password part of URL
 * @property trailingQuery keep trailing question character even if there are no query parameters
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KmatrixKtor_httpUrl : KmatrixBase <KmatrixKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) KmatrixKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
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
@property (readonly) id<KmatrixKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * A list containing the segments of the URL path.
 *
 * This property was designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.pathSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.pathSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.pathSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * To address this issue, the current [pathSegments] property will be renamed to [rawSegments].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.pathSegments)
 */
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KmatrixKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) KmatrixKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));

/**
 * A list containing the segments of the URL path.
 *
 * This property is designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.rawSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.rawSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.rawSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.rawSegments)
 */
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));

/**
 * A list of path segments derived from the URL, excluding any leading
 * and trailing empty segments.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * If you need to check for trailing slash and relative/absolute paths, please check the [rawSegments] property.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.segments)
 **/
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KmatrixKtor_httpHttpMethod : KmatrixBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (KmatrixKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Information about the content to be sent to the peer, recognized by a client or server engine
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent)
 */
__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KmatrixKtor_httpOutgoingContent : KmatrixBase

/**
 * Gets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.getProperty)
 */
- (id _Nullable)getPropertyKey:(KmatrixKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));

/**
 * Sets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.setProperty)
 */
- (void)setPropertyKey:(KmatrixKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));

/**
 * Trailers to set when sending this content, will be ignored if request is not in HTTP2 mode
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.trailers)
 */
- (id<KmatrixKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));

/**
 * Specifies content length in bytes for this resource.
 *
 * If null, the resources will be sent as `Transfer-Encoding: chunked`
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentLength)
 */
@property (readonly) KmatrixLong * _Nullable contentLength __attribute__((swift_name("contentLength")));

/**
 * Specifies [ContentType] for this resource.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentType)
 */
@property (readonly) KmatrixKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));

/**
 * Headers to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.headers)
 */
@property (readonly) id<KmatrixKtor_httpHeaders> headers __attribute__((swift_name("headers")));

/**
 * Status code to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.status)
 */
@property (readonly) KmatrixKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * A background job.
 * Conceptually, a job is a cancellable thing with a lifecycle that
 * concludes in its completion.
 *
 * Jobs can be arranged into parent-child hierarchies where the cancellation
 * of a parent leads to the immediate cancellation of all its [children] recursively.
 * Failure of a child with an exception other than [CancellationException] immediately cancels its parent and,
 * consequently, all its other children.
 * This behavior can be customized using [SupervisorJob].
 *
 * The most basic instances of the `Job` interface are created like this:
 *
 * - A **coroutine job** is created with the [launch][CoroutineScope.launch] coroutine builder.
 *   It runs a specified block of code and completes upon completion of this block.
 * - **[CompletableJob]** is created with a `Job()` factory function.
 *   It is completed by calling [CompletableJob.complete].
 *
 * Conceptually, an execution of a job does not produce a result value.
 * Jobs are launched solely for their
 * side effects.
 * See the [Deferred] interface for a job that produces a result.
 *
 * ### Job states
 *
 * A job has the following states:
 *
 * | **State**                        | [isActive] | [isCompleted] | [isCancelled] |
 * | -------------------------------- | ---------- | ------------- | ------------- |
 * | _New_ (optional initial state)   | `false`    | `false`       | `false`       |
 * | _Active_ (default initial state) | `true`     | `false`       | `false`       |
 * | _Completing_ (transient state)   | `true`     | `false`       | `false`       |
 * | _Cancelling_ (transient state)   | `false`    | `false`       | `true`        |
 * | _Cancelled_ (final state)        | `false`    | `true`        | `true`        |
 * | _Completed_ (final state)        | `false`    | `true`        | `false`       |
 *
 *
 * Note that these states are mentioned in italics below to make them easier to distinguish.
 *
 * Usually, a job is created in the _active_ state (it is created and started).
 * However, coroutine builders
 * that provide an optional `start` parameter create a coroutine in the _new_ state when this parameter is set to
 * [CoroutineStart.LAZY].
 * Such a job can be made _active_ by invoking [start] or [join].
 *
 * A job is in the _active_ state while the coroutine is working or until the [CompletableJob] completes,
 * fails, or is cancelled.
 *
 * Failure of an _active_ job with an exception transitions the state to the _cancelling_ state.
 * A job can be cancelled at any time with the [cancel] function that forces it to transition to
 * the _cancelling_ state immediately.
 * The job becomes _cancelled_ when it finishes executing its work and
 * all its children complete.
 *
 * Completion of an _active_ coroutine's body or a call to [CompletableJob.complete] transitions the job to
 * the _completing_ state.
 * It waits in the _completing_ state for all its children to complete before
 * transitioning to the _completed_ state.
 * Note that _completing_ state is purely internal to the job.
 * For an outside observer, a _completing_ job is still
 * active, while internally it is waiting for its children.
 *
 * ```
 *                                       wait children
 * +-----+ start  +--------+ complete   +-------------+  finish  +-----------+
 * | New | -----> | Active | ---------> | Completing  | -------> | Completed |
 * +-----+        +--------+            +-------------+          +-----------+
 *                  |  cancel / fail       |
 *                  |     +----------------+
 *                  |     |
 *                  V     V
 *              +------------+                           finish  +-----------+
 *              | Cancelling | --------------------------------> | Cancelled |
 *              +------------+                                   +-----------+
 * ```
 *
 * A `Job` instance in the
 * [coroutineContext](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.coroutines/coroutine-context.html)
 * represents the coroutine itself.
 *
 * ### Cancellation cause
 *
 * A coroutine job is said to _complete exceptionally_ when its body throws an exception;
 * a [CompletableJob] is completed exceptionally by calling [CompletableJob.completeExceptionally].
 * An exceptionally completed job is cancelled,
 * and the corresponding exception becomes the _cancellation cause_ of the job.
 *
 * Normal cancellation of a job is distinguished from its failure by the exception
 * that caused its cancellation.
 * A coroutine that throws a [CancellationException] is considered to be _cancelled_ normally.
 * If a different exception causes the cancellation, then the job has _failed_.
 * When a job has _failed_, its parent gets cancelled with the same type of exception,
 * thus ensuring transparency in delegating parts of the job to its children.
 *
 * Note, that the [cancel] function on a job only accepts a [CancellationException] as a cancellation cause, thus
 * calling [cancel] always results in a normal cancellation of a job, which does not lead to cancellation
 * of its parent.
 * This way, a parent can [cancel] its children (cancelling all their children recursively, too)
 * without cancelling itself.
 *
 * ### Concurrency and synchronization
 *
 * All functions on this interface and on all interfaces derived from it are **thread-safe** and can
 * be safely invoked from concurrent coroutines without external synchronization.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/coroutines/InternalForInheritanceCoroutinesApi)])
*/
__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KmatrixKotlinx_coroutines_coreJob <KmatrixKotlinCoroutineContextElement>
@required

/**
 * Attaches a child job so that this job becomes its parent and
 * returns a handle that should be used to detach it.
 *
 * A parent-child relation has the following effect:
 * - Cancellation of parent with [cancel] or its exceptional completion (failure)
 *   immediately cancels all its children.
 * - Parent cannot complete until all its children are complete. Parent waits for all its children to
 *   complete in _completing_ or _cancelling_ states.
 *
 * **A child must store the resulting [ChildHandle] and [dispose][DisposableHandle.dispose] the attachment
 * to its parent on its own completion.**
 *
 * Coroutine builders and job factory functions that accept `parent` [CoroutineContext] parameter
 * lookup a [Job] instance in the parent context and use this function to attach themselves as a child.
 * They also store a reference to the resulting [ChildHandle] and dispose a handle when they complete.
 *
 * @suppress This is an internal API. This method is too error-prone for public API.
 * Used in IntelliJ.
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KmatrixKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KmatrixKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));

/**
 * Cancels this job with an optional cancellation [cause].
 * A cause can be used to specify an error message or to provide other details on
 * the cancellation reason for debugging purposes.
 * See [Job] documentation for full explanation of cancellation machinery.
 */
- (void)cancelCause_:(KmatrixKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * Returns [CancellationException] that signals the completion of this job. This function is
 * used by [cancellable][suspendCancellableCoroutine] suspending functions. They throw exception
 * returned by this function when they suspend in the context of this job and this job becomes _complete_.
 *
 * This function returns the original [cancel] cause of this job if that `cause` was an instance of
 * [CancellationException]. Otherwise (if this job was cancelled with a cause of a different type, or
 * was cancelled without a cause, or had completed normally), an instance of [CancellationException] is
 * returned. The [CancellationException.cause] of the resulting [CancellationException] references
 * the original cancellation cause that was passed to [cancel] function.
 *
 * This function throws [IllegalStateException] when invoked on a job that is still active.
 *
 * @suppress **This an internal API and should not be used from general code.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KmatrixKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));

/**
 * Registers handler that is **synchronously** invoked once on completion of this job.
 * When the job is already complete, then the handler is immediately invoked
 * with the job's exception or cancellation cause or `null`. Otherwise, the handler will be invoked once when this
 * job is complete.
 *
 * The meaning of `cause` that is passed to the handler:
 * - Cause is `null` when the job has completed normally.
 * - Cause is an instance of [CancellationException] when the job was cancelled _normally_.
 *   **It should not be treated as an error**. In particular, it should not be reported to error logs.
 * - Otherwise, the job had _failed_.
 *
 * The resulting [DisposableHandle] can be used to [dispose][DisposableHandle.dispose] the
 * registration of this handler and release its memory if its invocation is no longer needed.
 * There is no need to dispose the handler after completion of this job. The references to
 * all the handlers are released when this job completes.
 *
 * Installed [handler] should not throw any exceptions. If it does, they will get caught,
 * wrapped into [CompletionHandlerException], and rethrown, potentially causing crash of unrelated code.
 *
 * **Note**: Implementation of `CompletionHandler` must be fast, non-blocking, and thread-safe.
 * This handler can be invoked concurrently with the surrounding code.
 * There is no guarantee on the execution context in which the [handler] is invoked.
 */
- (id<KmatrixKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KmatrixKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * Kept for preserving compatibility. Shouldn't be used by anyone.
 * @suppress
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KmatrixKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KmatrixKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * Suspends the coroutine until this job is complete. This invocation resumes normally (without exception)
 * when the job is complete for any reason and the [Job] of the invoking coroutine is still [active][isActive].
 * This function also [starts][Job.start] the corresponding coroutine if the [Job] was still in _new_ state.
 *
 * Note that the job becomes complete only when all its children are complete.
 *
 * This suspending function is cancellable and **always** checks for a cancellation of the invoking coroutine's Job.
 * If the [Job] of the invoking coroutine is cancelled or completed when this
 * suspending function is invoked or while it is suspended, this function
 * throws [CancellationException].
 *
 * In particular, it means that a parent coroutine invoking `join` on a child coroutine throws
 * [CancellationException] if the child had failed, since a failure of a child coroutine cancels parent by default,
 * unless the child was launched from within [supervisorScope].
 *
 * This function can be used in [select] invocation with [onJoin] clause.
 * Use [isCompleted] to check for a completion of this job without waiting.
 *
 * There is [cancelAndJoin] function that combines an invocation of [cancel] and `join`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));

/**
 * @suppress **Error**: Operator '+' on two Job objects is meaningless.
 * Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts.
 * The job to the right of `+` just replaces the job the left of `+`.
 */
- (id<KmatrixKotlinx_coroutines_coreJob>)plusOther:(id<KmatrixKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));

/**
 * Starts coroutine related to this job (if any) if it was not started yet.
 * The result is `true` if this invocation actually started coroutine or `false`
 * if it was already started or completed.
 */
- (BOOL)start __attribute__((swift_name("start()")));

/**
 * Returns a sequence of this job's children.
 *
 * A job becomes a child of this job when it is constructed with this job in its
 * [CoroutineContext] or using an explicit `parent` parameter.
 *
 * A parent-child relation has the following effect:
 *
 * - Cancellation of parent with [cancel] or its exceptional completion (failure)
 *   immediately cancels all its children.
 * - Parent cannot complete until all its children are complete. Parent waits for all its children to
 *   complete in _completing_ or _cancelling_ state.
 * - Uncaught exception in a child, by default, cancels parent. This applies even to
 *   children created with [async][CoroutineScope.async] and other future-like
 *   coroutine builders, even though their exceptions are caught and are encapsulated in their result.
 *   This default behavior can be overridden with [SupervisorJob].
 */
@property (readonly) id<KmatrixKotlinSequence> children __attribute__((swift_name("children")));

/**
 * Returns `true` when this job is active -- it was already started and has not completed nor was cancelled yet.
 * The job that is waiting for its [children] to complete is still considered to be active if it
 * was not cancelled nor failed.
 *
 * See [Job] documentation for more details on job states.
 */
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));

/**
 * Returns `true` if this job was cancelled for any reason, either by explicit invocation of [cancel] or
 * because it had failed or its child or parent was cancelled.
 * In the general case, it does not imply that the
 * job has already [completed][isCompleted], because it may still be finishing whatever it was doing and
 * waiting for its [children] to complete.
 *
 * See [Job] documentation for more details on cancellation and failures.
 */
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));

/**
 * Returns `true` when this job has completed for any reason. A job that was cancelled or failed
 * and has finished its execution is also considered complete. Job becomes complete only after
 * all its [children] complete.
 *
 * See [Job] documentation for more details on job states.
 */
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));

/**
 * Clause for [select] expression of [join] suspending function that selects when the job is complete.
 * This clause never fails, even if the job completes exceptionally.
 */
@property (readonly) id<KmatrixKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * Returns the parent of the current job if the parent-child relationship
 * is established or `null` if the job has no parent or was successfully completed.
 *
 * Accesses to this property are not idempotent, the property becomes `null` as soon
 * as the job is transitioned to its final state, whether it is cancelled or completed,
 * and all job children are completed.
 *
 * For a coroutine, its corresponding job completes as soon as the coroutine itself
 * and all its children are complete.
 *
 * @see [Job] state transitions for additional details.
 *
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<KmatrixKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol KmatrixKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<KmatrixKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<KmatrixKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KmatrixKtor_utilsAttributeKey<T> : KmatrixBase
- (instancetype)initWithName:(NSString *)name type:(KmatrixKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (KmatrixKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(KmatrixKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol KmatrixKotlinx_io_coreRawSink <KmatrixKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(KmatrixKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end


/**
 * A sink that facilitates typed data writes and keeps a buffer internally so that caller can write some data without
 * sending it directly to an upstream.
 *
 * [Sink] is the main `kotlinx-io` interface to write data in client's code,
 * any [RawSink] could be turned into [Sink] using [RawSink.buffered].
 *
 * Depending on the kind of upstream and the number of bytes written, buffering may improve the performance
 * by hiding the latency of small writes.
 *
 * Data stored inside the internal buffer could be sent to an upstream using [flush], [emit], or [hintEmit]:
 * - [flush] writes the whole buffer to an upstream and then flushes the upstream.
 * - [emit] writes all data from the buffer into the upstream without flushing it.
 * - [hintEmit] hints the source that current write operation is now finished and a part of data from the buffer
 * may be partially emitted into the upstream.
 * The latter is aimed to reduce memory footprint by keeping the buffer as small as possible without excessive writes
 * to the upstream.
 * All write operations implicitly calls [hintEmit].
 *
 * ### Write methods' behavior and naming conventions
 *
 * Methods writing a value of some type are usually named `write<Type>`, like [writeByte] or [writeInt], except methods
 * writing data from a some collection of bytes, like `write(ByteArray, Int, Int)` or
 * `write(source: RawSource, byteCount: Long)`.
 * In the latter case, if a collection is consumable (i.e., once data was read from it will no longer be available for
 * reading again), write method will consume as many bytes as it was requested to write.
 *
 * Methods fully consuming its argument are named `transferFrom`, like [transferFrom].
 *
 * It is recommended to follow the same naming convention for Sink extensions.
 *
 * ### Thread-safety guarantees
 *
 * Until stated otherwise, [Sink] implementations are not thread safe.
 * If a [Sink] needs to be accessed from multiple threads, an additional synchronization is required.
 */
__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol KmatrixKotlinx_io_coreSink <KmatrixKotlinx_io_coreRawSink>
@required

/**
 * Writes all buffered data to the underlying sink if one exists.
 * The underlying sink will not be explicitly flushed.
 *
 * This method behaves like [flush], but has weaker guarantees.
 * Call this method before a buffered sink goes out of scope so that its data can reach its destination.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.emit
 */
- (void)emit __attribute__((swift_name("emit()")));

/**
 * Hints that the buffer may be *partially* emitted (see [emit]) to the underlying sink.
 * The underlying sink will not be explicitly flushed.
 * There are no guarantees that this call will cause emit of buffered data as well as
 * there are no guarantees how many bytes will be emitted.
 *
 * Typically, application code will not need to call this: it is only necessary when
 * application code writes directly to this [buffered].
 * Use this to limit the memory held in the buffer.
 *
 * Consider using [Sink.writeToInternalBuffer] for writes into [buffered] followed by [hintEmit] call.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));

/**
 * Removes all bytes from [source] and write them to this sink.
 * Returns the number of bytes read which will be 0 if [source] is exhausted.
 *
 * @param source the source to consume data from.
 *
 * @throws IllegalStateException when the sink or [source] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.transferFrom
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (int64_t)transferFromSource:(id<KmatrixKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));

/**
 * Removes [byteCount] bytes from [source] and write them to this sink.
 *
 * If [source] will be exhausted before reading [byteCount] from it then an exception throws on
 * an attempt to read remaining bytes will be propagated to a caller of this method.
 *
 * @param source the source to consume data from.
 * @param byteCount the number of bytes to read from [source] and to write into this sink.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the sink or [source] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeSourceToSink
 */
- (void)writeSource:(id<KmatrixKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));

/**
 * Writes bytes from [source] array or its subrange to this sink.
 *
 * @param source the array from which bytes will be written into this sink.
 * @param startIndex the start index (inclusive) of the [source] subrange to be written, 0 by default.
 * @param endIndex the endIndex (exclusive) of the [source] subrange to be written, size of the [source] by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of range of [source] array indices.
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeByteArrayToSink
 */
- (void)writeSource:(KmatrixKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));

/**
 * Writes a byte to this sink.
 *
 * @param byte the byte to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeByte
 */
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));

/**
 * Writes four bytes containing [int], in the big-endian order, to this sink.
 *
 * @param int the integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeInt
 */
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));

/**
 * Writes eight bytes containing [long], in the big-endian order, to this sink.
 *
 * @param long the long integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeLong
 */
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));

/**
 * Writes two bytes containing [short], in the big-endian order, to this sink.
 *
 * @param short the short integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeShort
 */
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * This sink's internal buffer. It contains data written to the sink, but not yet flushed to the upstream.
 *
 * Incorrect use of the buffer may cause data loss or unexpected data being sent to the upstream.
 * Consider using alternative APIs to write data into the sink, if possible:
 * - write data into separate [Buffer] instance and write that buffer into the sink and then flush the sink to
 *   ensure that the upstream will receive complete data;
 * - implement [RawSink] and wrap an upstream sink into it to intercept data being written.
 *
 * If there is an actual need to write data directly into the buffer, consider using [Sink.writeToInternalBuffer] instead.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmatrixKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end


/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface KmatrixKotlinx_io_coreBuffer : KmatrixBase <KmatrixKotlinx_io_coreSource, KmatrixKotlinx_io_coreSink>

/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Discards all bytes in this buffer.
 *
 * Call to this method is equivalent to [skip] with `byteCount = size`.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferClear
 */
- (void)clear __attribute__((swift_name("clear()")));

/**
 * This method does not affect the buffer.
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Returns a deep copy of this buffer.
 */
- (KmatrixKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * Copies bytes from this buffer's subrange starting at [startIndex] and ending at [endIndex], to [out] buffer.
 * This method does not consume data from the buffer.
 *
 * @param out the destination buffer to copy data into.
 * @param startIndex the index (inclusive) of the first byte of data in this buffer to copy,
 * 0 by default.
 * @param endIndex the index (exclusive) of the last byte of data in this buffer to copy, `buffer.size` by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of this buffer bounds
 * (`[0..buffer.size)`).
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferCopy
 */
- (void)doCopyToOut:(KmatrixKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 */
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 */
- (void)flush __attribute__((swift_name("flush()")));

/**
 * Returns the byte at [position].
 *
 * Use of this method may expose significant performance penalties and it's not recommended to use it
 * for sequential access to a range of bytes within the buffer.
 *
 * @throws IndexOutOfBoundsException when [position] is negative or greater or equal to [Buffer.size].
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferGetByte
 */
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<KmatrixKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(KmatrixKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(KmatrixKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KmatrixKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));

/**
 * Discards [byteCount] bytes from the head of this buffer.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 */
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));

/**
 * Returns a human-readable string that describes the contents of this buffer. For buffers containing
 * few bytes, this is a string like `Buffer(size=4 hex=0000ffff)`. However, if the buffer is too large,
 * a string will contain its size and only a prefix of data, like `Buffer(size=1024 hex=01234…)`.
 * Thus, the string could not be used to compare buffers or verify buffer's content.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferToString
 */
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<KmatrixKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<KmatrixKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(KmatrixKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<KmatrixKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(KmatrixKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * Returns the buffer itself.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmatrixKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));

/**
 * The number of bytes accessible for read from this buffer.
 */
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface KmatrixKtor_utilsWeekDayCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (KmatrixKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short week day name [WeekDay.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (KmatrixKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface KmatrixKtor_utilsMonthCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (KmatrixKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short month name [Month.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (KmatrixKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KmatrixKotlinAbstractCoroutineContextElement : KmatrixBase <KmatrixKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KmatrixKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KmatrixKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KmatrixKotlinContinuationInterceptor <KmatrixKotlinCoroutineContextElement>
@required
- (id<KmatrixKotlinContinuation>)interceptContinuationContinuation:(id<KmatrixKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KmatrixKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end


/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KmatrixKotlinx_coroutines_coreCoroutineDispatcher : KmatrixKotlinAbstractCoroutineContextElement <KmatrixKotlinContinuationInterceptor>

/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KmatrixKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));

/**
 * Requests execution of a runnable [block].
 * The dispatcher guarantees that [block] will eventually execute, typically by dispatching it to a thread pool
 * or using a dedicated thread.
 * The [context] parameter represents the context of the coroutine that is being dispatched,
 * or [EmptyCoroutineContext] if a non-coroutine-specific [Runnable] is dispatched instead.
 * Implementations may use [context] for additional context-specific information,
 * such as priority, whether the dispatched coroutine can be invoked in place,
 * coroutine name, and additional diagnostic elements.
 *
 * This method should guarantee that the given [block] will be eventually invoked,
 * otherwise the system may reach a deadlock state and never leave it.
 * The cancellation mechanism is transparent for [CoroutineDispatcher] and is managed by [block] internals.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in an inconsistent and hard-to-debug state.
 * It is assumed that if any exceptions do get thrown from this method, then [block] will not be executed.
 *
 * Most implementations should avoid calling [block] in-place. Doing so may result in `StackOverflowError`
 * when `dispatch` is invoked repeatedly, for example when [yield] is called in a loop.
 * In order to execute a block in place, it is recommended to return `false` from [isDispatchNeeded]
 * and delegate the `dispatch` implementation to `Dispatchers.Unconfined.dispatch` in such cases.
 * To support this, the coroutines machinery ensures in-place execution and forms an event-loop to
 * avoid unbound recursion.
 *
 * @see isDispatchNeeded
 * @see Dispatchers.Unconfined
 */
- (void)dispatchContext:(id<KmatrixKotlinCoroutineContext>)context block:(id<KmatrixKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * Dispatches execution of a runnable `block` onto another thread in the given `context`
 * with a hint for the dispatcher that the current dispatch is triggered by a [yield] call, so that the execution of this
 * continuation may be delayed in favor of already dispatched coroutines.
 *
 * Though the `yield` marker may be passed as a part of [context], this
 * is a separate method for performance reasons.
 *
 * Implementation note: this entry-point is used for `Dispatchers.IO` and [Dispatchers.Default]
 * unerlying implementations, see overrides for this method.
 *
 * @suppress **This an internal API and should not be used from general code.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<KmatrixKotlinCoroutineContext>)context block:(id<KmatrixKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));

/**
 * Returns a continuation that wraps the provided [continuation], thus intercepting all resumptions.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in the inconsistent and hard to debug state.
 */
- (id<KmatrixKotlinContinuation>)interceptContinuationContinuation:(id<KmatrixKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));

/**
 * Returns `true` if the execution of the coroutine should be performed with [dispatch] method.
 * The default behavior for most dispatchers is to return `true`.
 *
 * If this method returns `false`, the coroutine is resumed immediately in the current thread,
 * potentially forming an event-loop to prevent stack overflows.
 * The event loop is an advanced topic and its implications can be found in [Dispatchers.Unconfined] documentation.
 *
 * The [context] parameter represents the context of the coroutine that is being dispatched,
 * or [EmptyCoroutineContext] if a non-coroutine-specific [Runnable] is dispatched instead.
 *
 * A dispatcher can override this method to provide a performance optimization and avoid paying a cost of an unnecessary dispatch.
 * E.g. [MainCoroutineDispatcher.immediate] checks whether we are already in the required UI thread in this method and avoids
 * an additional dispatch when it is not required.
 *
 * While this approach can be more efficient, it is not chosen by default to provide a consistent dispatching behaviour
 * so that users won't observe unexpected and non-consistent order of events by default.
 *
 * Coroutine builders like [launch][CoroutineScope.launch] and [async][CoroutineScope.async] accept an optional [CoroutineStart]
 * parameter that allows one to optionally choose the [undispatched][CoroutineStart.UNDISPATCHED] behavior to start coroutine immediately,
 * but to be resumed only in the provided dispatcher.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in the inconsistent and hard to debug state.
 *
 * @see dispatch
 * @see Dispatchers.Unconfined
 */
- (BOOL)isDispatchNeededContext:(id<KmatrixKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * Creates a view of the current dispatcher that limits the parallelism to the given [value][parallelism].
 * The resulting view uses the original dispatcher for execution but with the guarantee that
 * no more than [parallelism] coroutines are executed at the same time.
 *
 * This method does not impose restrictions on the number of views or the total sum of parallelism values,
 * each view controls its own parallelism independently with the guarantee that the effective parallelism
 * of all views cannot exceed the actual parallelism of the original dispatcher.
 *
 * The resulting dispatcher does not guarantee that the coroutines will always be dispatched on the same
 * subset of threads, it only guarantees that at most [parallelism] coroutines are executed at the same time,
 * and reuses threads from the original dispatchers.
 * It does not constitute a resource -- it is a _view_ of the underlying dispatcher that can be thrown away
 * and is not required to be closed.
 *
 * ### Example of usage
 * ```
 * // Background dispatcher for the application
 * val dispatcher = newFixedThreadPoolContext(4, "App Background")
 * // At most 2 threads will be processing images as it is really slow and CPU-intensive
 * val imageProcessingDispatcher = dispatcher.limitedParallelism(2, "Image processor")
 * // At most 3 threads will be processing JSON to avoid image processing starvation
 * val jsonProcessingDispatcher = dispatcher.limitedParallelism(3, "Json processor")
 * // At most 1 thread will be doing IO
 * val fileWriterDispatcher = dispatcher.limitedParallelism(1, "File writer")
 * ```
 * Note how in this example the application has an executor with 4 threads, but the total sum of all limits
 * is 6. Still, at most 4 coroutines can be executed simultaneously as each view limits only its own parallelism,
 * and at most 4 threads can exist in the system.
 *
 * Note that this example was structured in such a way that it illustrates the parallelism guarantees.
 * In practice, it is usually better to use `Dispatchers.IO` or [Dispatchers.Default] instead of creating a
 * `dispatcher`.
 *
 * ### `limitedParallelism(1)` pattern
 *
 * One of the common patterns is confining the execution of specific tasks to a sequential execution in background
 * with `limitedParallelism(1)` invocation.
 * For that purpose, the implementation guarantees that sections of code between suspensions
 * are executed sequentially and that a happens-before relation
 * is established between them:
 *
 * ```
 * val confined = Dispatchers.Default.limitedParallelism(1, "incrementDispatcher")
 * var counter = 0
 *
 * // Invoked from arbitrary coroutines
 * launch(confined) {
 *     // This increment is sequential and race-free
 *     ++counter
 * }
 * ```
 * Note that there is no guarantee that the underlying system thread will always be the same.
 *
 * #### It is not a mutex!
 *
 * **Pitfall**: [limitedParallelism] limits how many threads can execute some code in parallel,
 * but does not limit how many coroutines execute concurrently!
 *
 * For example:
 *
 * ```
 * val notAMutex = Dispatchers.Default.limitedParallelism(1)
 *
 * repeat(3) {
 *     launch(notAMutex) {
 *         println("Coroutine $it entering...")
 *         delay(20.milliseconds)
 *         println("Coroutine $it leaving.")
 *     }
 * }
 * ```
 *
 * The output will be similar to this:
 *
 * ```
 * Coroutine 0 entering...
 * Coroutine 1 entering...
 * Coroutine 2 entering...
 * Coroutine 0 leaving.
 * Coroutine 1 leaving.
 * Coroutine 2 leaving.
 * ```
 *
 * This means that coroutines are not guaranteed to run to completion before the dispatcher starts executing
 * code from another coroutine.
 * The only guarantee in this example is that two `println` calls will not occur in several threads simultaneously.
 *
 * Use a [kotlinx.coroutines.sync.Mutex] or a [kotlinx.coroutines.sync.Semaphore] for limiting concurrency.
 *
 * ### Dispatchers.IO
 *
 * `Dispatcher.IO` is considered _elastic_ for the purposes of limited parallelism -- the sum of
 * views is not restricted by the capacity of `Dispatchers.IO`.
 * It means that it is safe to replace `newFixedThreadPoolContext(nThreads)` with
 * `Dispatchers.IO.limitedParallelism(nThreads)` w.r.t. available number of threads.
 * See `Dispatchers.IO` documentation for more details.
 *
 * ### Restrictions and implementation details
 *
 * The default implementation of `limitedParallelism` does not support direct dispatchers,
 * such as executing the given runnable in place during [dispatch] calls.
 * Any dispatcher that may return `false` from [isDispatchNeeded] is considered direct.
 * For direct dispatchers, it is recommended to override this method
 * and provide a domain-specific implementation or to throw an [UnsupportedOperationException].
 *
 * Implementations of this method are allowed to return `this` if the current dispatcher already satisfies the parallelism requirement.
 * For example, `Dispatchers.Main.limitedParallelism(1)` returns `Dispatchers.Main`, because the main dispatcher is already single-threaded.
 *
 * @param name optional name for the resulting dispatcher string representation if a new dispatcher was created.
 *        Implementations are free to ignore this parameter.
 * @throws IllegalArgumentException if the given [parallelism] is non-positive
 * @throws UnsupportedOperationException if the current dispatcher does not support limited parallelism views
 */
- (KmatrixKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));

/**
 * @suppress **Error**: Operator '+' on two CoroutineDispatcher objects is meaningless.
 * CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts.
 * The dispatcher to the right of `+` just replaces the dispatcher to the left.
 */
- (KmatrixKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(KmatrixKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KmatrixKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));

/** @suppress for nicer debugging */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Proxy configuration.
 *
 * See [ProxyBuilder] to create proxy.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.ProxyConfig)
 *
 * @param url: proxy url address.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KmatrixKtor_client_coreProxyConfig : KmatrixBase
- (instancetype)initWithUrl:(KmatrixKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmatrixKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Base interface representing a [HttpClient] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol KmatrixKtor_client_coreHttpClientPlugin
@required

/**
 * Installs the [plugin] class for a [HttpClient] defined at [scope].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.install)
 */
- (void)installPlugin:(id)plugin scope:(KmatrixKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));

/**
 * Builds a [TPlugin] by calling the [block] with a [TConfig] config instance as receiver.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.prepare)
 */
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));

/**
 * The [AttributeKey] for this plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.key)
 */
@property (readonly) KmatrixKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end


/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface KmatrixKtor_eventsEventDefinition<T> : KmatrixBase

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * A handle to an allocated object that can be disposed to make it eligible for garbage collection.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KmatrixKotlinx_coroutines_coreDisposableHandle
@required

/**
 * Disposes the corresponding object, making it eligible for garbage collection.
 * Repeated invocation of this function has no effect.
 */
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * Represents a phase in a pipeline
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.PipelinePhase)
 *
 * @param name a name for this phase
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KmatrixKtor_utilsPipelinePhase : KmatrixBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol KmatrixKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KmatrixKotlinSuspendFunction2 <KmatrixKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface KmatrixKtor_client_coreHttpReceivePipelinePhases : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.After)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.Before)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.State)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KmatrixKotlinUnit : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface KmatrixKtor_client_coreHttpRequestPipelinePhases : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Before)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Encode a request body to [OutgoingContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Render)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));

/**
 * A phase for the [HttpSend] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Send)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));

/**
 * Use this phase to modify a request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.State)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform a request body to supported render format.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Transform)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * A builder message either for the client or the server,
 * that has a [headers] builder associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder)
 */
__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KmatrixKtor_httpHttpMessageBuilder
@required

/**
 * MessageBuilder [HeadersBuilder]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder.headers)
 */
@property (readonly) KmatrixKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end


/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KmatrixKtor_client_coreHttpRequestBuilder : KmatrixBase <KmatrixKtor_httpHttpMessageBuilder>

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmatrixKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Creates immutable [HttpRequestData].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.build)
 */
- (KmatrixKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));

/**
 * Retrieves capability by the key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<KmatrixKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));

/**
 * Sets request-specific attributes specified by [block].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setAttributes)
 */
- (void)setAttributesBlock:(void (^)(id<KmatrixKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));

/**
 * Sets capability configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setCapability)
 */
- (void)setCapabilityKey:(id<KmatrixKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));

/**
 * Mutates [this] by copying all the data but execution context from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFrom)
 */
- (KmatrixKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KmatrixKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));

/**
 * Mutates [this] copying all the data from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFromWithExecutionContext)
 */
- (KmatrixKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KmatrixKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));

/**
 * Executes a [block] that configures the [URLBuilder] associated to this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
- (void)urlBlock:(void (^)(KmatrixKtor_httpURLBuilder *, KmatrixKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));

/**
 * Provides access to attributes specific for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.attributes)
 */
@property (readonly) id<KmatrixKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The [body] for this request. Initially [EmptyContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.body)
 */
@property id body __attribute__((swift_name("body")));

/**
 * The [KType] of [body] for this request. Null for default types that don't need serialization.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.bodyType)
 */
@property KmatrixKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));

/**
 * A deferred used to control the execution of this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.executionContext)
 */
@property (readonly) id<KmatrixKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));

/**
 * [HeadersBuilder] to configure the headers for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.headers)
 */
@property (readonly) KmatrixKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));

/**
 * [HttpMethod] used by this request. [HttpMethod.Get] by default.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.method)
 */
@property KmatrixKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * [URLBuilder] to configure the URL for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
@property (readonly) KmatrixKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface KmatrixKtor_client_coreHttpResponsePipelinePhases : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.After)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * Decode response body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Parse)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Receive)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.State)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform response body to expected format
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Transform)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KmatrixKtor_client_coreHttpResponseContainer : KmatrixBase
- (instancetype)initWithExpectedType:(KmatrixKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (KmatrixKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KmatrixKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmatrixKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface KmatrixKtor_client_coreHttpSendPipelinePhases : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Before)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Send a request to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Engine)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));

/**
 * Use this phase for logging and other actions that don't modify a request or shared data.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Monitoring)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));

/**
 * Receive a pipeline execution phase.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Receive)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to modify request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.State)
 */
@property (readonly) KmatrixKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KmatrixKtor_httpUrlCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<KmatrixKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents HTTP parameters as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Parameters)
 */
__attribute__((swift_name("Ktor_httpParameters")))
@protocol KmatrixKtor_httpParameters <KmatrixKtor_utilsStringValues>
@required
@end


/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KmatrixKtor_httpURLProtocol : KmatrixBase <KmatrixKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (KmatrixKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KmatrixKtor_httpHttpMethodCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<KmatrixKtor_httpHttpMethod *> *)getDefaultMethods __attribute__((swift_name("getDefaultMethods()"))) __attribute__((deprecated("Use DefaultMethods const instead")));
- (KmatrixKtor_httpHttpMethod *)getDelete __attribute__((swift_name("getDelete()"))) __attribute__((deprecated("Use Delete const instead")));
- (KmatrixKtor_httpHttpMethod *)getGet __attribute__((swift_name("getGet()"))) __attribute__((deprecated("Use Get const instead")));
- (KmatrixKtor_httpHttpMethod *)getHead __attribute__((swift_name("getHead()"))) __attribute__((deprecated("Use Head const instead")));
- (KmatrixKtor_httpHttpMethod *)getOptions __attribute__((swift_name("getOptions()"))) __attribute__((deprecated("Use Options const instead")));
- (KmatrixKtor_httpHttpMethod *)getPatch __attribute__((swift_name("getPatch()"))) __attribute__((deprecated("Use Patch const instead")));
- (KmatrixKtor_httpHttpMethod *)getPost __attribute__((swift_name("getPost()"))) __attribute__((deprecated("Use Post const instead")));
- (KmatrixKtor_httpHttpMethod *)getPut __attribute__((swift_name("getPut()"))) __attribute__((deprecated("Use Put const instead")));
- (KmatrixKtor_httpHttpMethod *)getTrace __attribute__((swift_name("getTrace()"))) __attribute__((deprecated("Use Trace const instead")));

/**
 * Parse HTTP method by [method] string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.parse)
 */
- (KmatrixKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));

/**
 * A list of default HTTP methods
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.DefaultMethods)
 */
@property (readonly) NSArray<KmatrixKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KmatrixKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KmatrixKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KmatrixKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KmatrixKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KmatrixKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KmatrixKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KmatrixKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@property (readonly) KmatrixKtor_httpHttpMethod *Query __attribute__((swift_name("Query")));
@property (readonly) KmatrixKtor_httpHttpMethod *Trace __attribute__((swift_name("Trace")));
@end


/**
 * Represents a header value that consist of [content] followed by [parameters].
 * Useful for headers such as `Content-Type`, `Content-Disposition` and so on.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters)
 *
 * @property content header's content without parameters
 * @property parameters
 */
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KmatrixKtor_httpHeaderValueWithParameters : KmatrixBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmatrixKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));

/**
 * The first value for the parameter with [name] comparing case-insensitively or `null` if no such parameters found
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.parameter)
 */
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KmatrixKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end


/**
 * Represents a value for a `Content-Type` header.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType)
 *
 * @property contentType represents a type part of the media type.
 * @property contentSubtype represents a subtype part of the media type.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KmatrixKtor_httpContentType : KmatrixKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KmatrixKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmatrixKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmatrixKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 * The `this` type must be a more specific type than the [pattern] type. In other words:
 *
 * ```kotlin
 * ContentType("a", "b").match(ContentType("a", "b").withParameter("foo", "bar")) === false
 * ContentType("a", "b").withParameter("foo", "bar").match(ContentType("a", "b")) === true
 * ContentType("a", "*").match(ContentType("a", "b")) === false
 * ContentType("a", "b").match(ContentType("a", "*")) === true
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern:(KmatrixKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));

/**
 * Creates a copy of `this` type with the added parameter with the [name] and [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withParameter)
 */
- (KmatrixKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));

/**
 * Creates a copy of `this` type without any parameters
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withoutParameters)
 */
- (KmatrixKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * A handle that child keep onto its parent so that it is able to report its cancellation.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KmatrixKotlinx_coroutines_coreChildHandle <KmatrixKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * Child is cancelling its parent by invoking this method.
 * This method is invoked by the child twice. The first time child report its root cause as soon as possible,
 * so that all its siblings and the parent can start cancelling their work asap. The second time
 * child invokes this method when it had aggregated and determined its final cancellation cause.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(KmatrixKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * Returns the parent of the current parent-child relationship.
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<KmatrixKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * A reference that parent receives from its child so that it can report its cancellation.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KmatrixKotlinx_coroutines_coreChildJob <KmatrixKotlinx_coroutines_coreJob>
@required

/**
 * Parent is cancelling its child by invoking this method.
 * Child finds the cancellation cause using [ParentJob.getChildJobCancellationCause].
 * This method does nothing is the child is already being cancelled.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<KmatrixKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol KmatrixKotlinSequence
@required
- (id<KmatrixKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * Each [select] clause is specified with:
 * 1) the [object of this clause][clauseObject],
 *    such as the channel instance for [SendChannel.onSend];
 * 2) the function that specifies how this clause
 *    should be registered in the object above;
 * 3) the function that modifies the internal result
 *    (passed via [SelectInstance.trySelect] or
 *    [SelectInstance.selectInRegistrationPhase])
 *    to the argument of the user-specified block.
 * 4) the function that specifies how the internal result provided via
 *    [SelectInstance.trySelect] or [SelectInstance.selectInRegistrationPhase]
 *    should be processed in case of this `select` cancellation while dispatching.
 *
 * @suppress **This is unstable API, and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol KmatrixKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) KmatrixKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<KmatrixKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(KmatrixKotlinThrowable *, id _Nullable, id<KmatrixKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<KmatrixKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end


/**
 * Clause for [select] expression without additional parameters that does not select any value.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KmatrixKotlinx_coroutines_coreSelectClause0 <KmatrixKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KmatrixKotlinKTypeProjection : KmatrixBase
- (instancetype)initWithVariance:(KmatrixKotlinKVariance * _Nullable)variance type:(id<KmatrixKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KmatrixKotlinKTypeProjection *)doCopyVariance:(KmatrixKotlinKVariance * _Nullable)variance type:(id<KmatrixKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmatrixKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KmatrixKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol KmatrixKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KmatrixKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
 *   kotlin.DeprecatedSinceKotlin(warningSince="2.4")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KmatrixKotlinAbstractCoroutineContextKey<B, E> : KmatrixBase <KmatrixKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KmatrixKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KmatrixKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Polymorphic coroutine context keys are error-prone, difficult to implement correctly, and can encourage depending on implementation details. Prefer retrieving the element by its base key and casting it explicitly when needed or introducing a dedicated extension property.")));
@end


/** @suppress
 *
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KmatrixKotlinx_coroutines_coreCoroutineDispatcherKey : KmatrixKotlinAbstractCoroutineContextKey<id<KmatrixKotlinContinuationInterceptor>, KmatrixKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));

/** @suppress */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KmatrixKotlinCoroutineContextKey>)baseKey safeCast:(id<KmatrixKotlinCoroutineContextElement> _Nullable (^)(id<KmatrixKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end


/**
 * A runnable task for [CoroutineDispatcher.dispatch].
 *
 * Equivalent to the type `() -> Unit`.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KmatrixKotlinx_coroutines_coreRunnable
@required

/**
 * @suppress
 */
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol KmatrixKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmatrixKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmatrixKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmatrixKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmatrixKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface KmatrixKtor_utilsStringValuesBuilderImpl : KmatrixBase <KmatrixKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmatrixKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmatrixKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmatrixKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmatrixKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
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
@property (readonly) KmatrixMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KmatrixKtor_httpHeadersBuilder : KmatrixKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KmatrixKtor_httpHeaders>)build __attribute__((swift_name("build()")));

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
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface KmatrixKtor_client_coreHttpRequestBuilderCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A URL builder with all mutable components
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder)
 *
 * @property protocol URL protocol (scheme)
 * @property host name without port (domain)
 * @property port port number
 * @property user username part (optional)
 * @property password password part (optional)
 * @property pathSegments URL path without query
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property trailingQuery keep a trailing question character even if there are no query parameters
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KmatrixKtor_httpURLBuilder : KmatrixBase
- (instancetype)initWithProtocol:(KmatrixKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<KmatrixKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmatrixKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Build a [Url] instance (everything is copied to a new instance)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.build)
 */
- (KmatrixKtor_httpUrl *)build __attribute__((swift_name("build()")));

/**
 * Build a URL string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.buildString)
 */
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<KmatrixKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KmatrixKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property KmatrixKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property KmatrixKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KmatrixKtor_httpURLProtocolCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create an instance by [name] or use already existing instance
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.createOrDefault)
 */
- (KmatrixKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));

/**
 * HTTP with port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTP)
 */
@property (readonly) KmatrixKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));

/**
 * secure HTTPS with port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTPS)
 */
@property (readonly) KmatrixKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));

/**
 * Socks proxy url protocol.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.SOCKS)
 */
@property (readonly) KmatrixKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));

/**
 * Web socket over HTTP on port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WS)
 */
@property (readonly) KmatrixKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));

/**
 * Web socket over secure HTTPS on port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WSS)
 */
@property (readonly) KmatrixKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));

/**
 * Protocols by names map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.byName)
 */
@property (readonly) NSDictionary<NSString *, KmatrixKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KmatrixKtor_httpHeaderValueParam : KmatrixBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (KmatrixKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KmatrixKtor_httpHeaderValueWithParametersCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parse header with parameter and pass it to [init] function to instantiate particular type
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.Companion.parse)
 */
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KmatrixKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KmatrixKtor_httpContentTypeCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parses a string representing a `Content-Type` header into a [ContentType] instance.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.parse)
 */
- (KmatrixKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));

/**
 * Represents a pattern `* / *` to match any content type.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.Any)
 */
@property (readonly) KmatrixKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * A reference that child receives from its parent when it is being cancelled by the parent.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KmatrixKotlinx_coroutines_coreParentJob <KmatrixKotlinx_coroutines_coreJob>
@required

/**
 * Child job is using this method to learn its cancellation cause when the parent cancels it with [ChildJob.parentCancelled].
 * This method is invoked only if the child was not already being cancelled.
 *
 * Note that [CancellationException] is the method's return type: if child is cancelled by its parent,
 * then the original exception is **already** handled by either the parent or the original source of failure.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KmatrixKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * Internal representation of `select` instance.
 *
 * @suppress **This is unstable API, and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KmatrixKotlinx_coroutines_coreSelectInstance
@required

/**
 * When this `select` instance is stored as a waiter, the specified [handle][disposableHandle]
 * defines how the stored `select` should be removed in case of cancellation or another clause selection.
 */
- (void)disposeOnCompletionDisposableHandle:(id<KmatrixKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));

/**
 * When a clause becomes selected during registration, the corresponding internal result
 * (which is further passed to the clause's [ProcessResultFunction]) should be provided
 * via this function. After that, other clause registrations are ignored and [trySelect] fails.
 */
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));

/**
 * This function should be called by other operations,
 * which are trying to perform a rendezvous with this `select`.
 * Returns `true` if the rendezvous succeeds, `false` otherwise.
 *
 * Note that according to the current implementation, a rendezvous attempt can fail
 * when either another clause is already selected or this `select` is still in
 * REGISTRATION phase. To distinguish the reasons, [SelectImplementation.trySelectDetailed]
 * function can be used instead.
 */
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));

/**
 * The context of the coroutine that is performing this `select` operation.
 */
@property (readonly) id<KmatrixKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KmatrixKotlinKVariance : KmatrixKotlinEnum<KmatrixKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmatrixKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KmatrixKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KmatrixKotlinKVariance *out __attribute__((swift_name("out")));
+ (KmatrixKotlinArray<KmatrixKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmatrixKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KmatrixKotlinKTypeProjectionCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (KmatrixKotlinKTypeProjection *)contravariantType:(id<KmatrixKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (KmatrixKotlinKTypeProjection *)covariantType:(id<KmatrixKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (KmatrixKotlinKTypeProjection *)invariantType:(id<KmatrixKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KmatrixKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface KmatrixKtor_httpURLBuilderCompanion : KmatrixBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmatrixKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol KmatrixKtor_httpParametersBuilder <KmatrixKtor_utilsStringValuesBuilder>
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
