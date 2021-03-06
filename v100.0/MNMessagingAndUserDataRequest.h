/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNThreadQuery, MNModelRequestConfiguration, MNMessagesLoadingConfiguration, FBMThreadSummary, MNIndexedConfirmedMessageSet, MNIndexedAppMessageSet, NSError, NSDictionary, NSSet, MNThreadViewModelLoadResult;

@interface MNMessagingAndUserDataRequest : NSObject {

	unsigned long long _requestId;
	MNThreadQuery* _threadQuery;
	MNModelRequestConfiguration* _fetchConfiguration;
	MNMessagesLoadingConfiguration* _messagesLoadingConfiguration;
	unsigned long long _threadRequestState;
	FBMThreadSummary* _threadSummary;
	MNIndexedConfirmedMessageSet* _confirmedMessages;
	MNIndexedAppMessageSet* _messages;
	NSError* _loadingError;
	unsigned long long _userRequestState;
	NSDictionary* _usersByUserId;
	NSSet* _requestedUserIds;
	MNThreadViewModelLoadResult* _threadViewModelLoadResult;

}

@property (assign,nonatomic) unsigned long long requestId;                                                      //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) MNThreadQuery * threadQuery;                                                //@synthesize threadQuery=_threadQuery - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * fetchConfiguration;                           //@synthesize fetchConfiguration=_fetchConfiguration - In the implementation block
@property (nonatomic,copy,readonly) MNMessagesLoadingConfiguration * messagesLoadingConfiguration;              //@synthesize messagesLoadingConfiguration=_messagesLoadingConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long threadRequestState;                                             //@synthesize threadRequestState=_threadRequestState - In the implementation block
@property (nonatomic,retain) FBMThreadSummary * threadSummary;                                                  //@synthesize threadSummary=_threadSummary - In the implementation block
@property (nonatomic,retain) MNIndexedConfirmedMessageSet * confirmedMessages;                                  //@synthesize confirmedMessages=_confirmedMessages - In the implementation block
@property (nonatomic,copy) MNIndexedAppMessageSet * messages;                                                   //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) NSError * loadingError;                                                            //@synthesize loadingError=_loadingError - In the implementation block
@property (assign,nonatomic) unsigned long long userRequestState;                                               //@synthesize userRequestState=_userRequestState - In the implementation block
@property (nonatomic,copy) NSDictionary * usersByUserId;                                                        //@synthesize usersByUserId=_usersByUserId - In the implementation block
@property (nonatomic,copy) NSSet * requestedUserIds;                                                            //@synthesize requestedUserIds=_requestedUserIds - In the implementation block
@property (nonatomic,retain) MNThreadViewModelLoadResult * threadViewModelLoadResult;                           //@synthesize threadViewModelLoadResult=_threadViewModelLoadResult - In the implementation block
-(FBMThreadSummary *)threadSummary;
-(NSDictionary *)usersByUserId;
-(MNThreadQuery *)threadQuery;
-(NSSet *)requestedUserIds;
-(id)initWithThreadQuery:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3 ;
-(MNModelRequestConfiguration *)fetchConfiguration;
-(MNMessagesLoadingConfiguration *)messagesLoadingConfiguration;
-(unsigned long long)threadRequestState;
-(void)setThreadRequestState:(unsigned long long)arg1 ;
-(void)setThreadSummary:(FBMThreadSummary *)arg1 ;
-(MNIndexedConfirmedMessageSet *)confirmedMessages;
-(void)setConfirmedMessages:(MNIndexedConfirmedMessageSet *)arg1 ;
-(NSError *)loadingError;
-(void)setLoadingError:(NSError *)arg1 ;
-(unsigned long long)userRequestState;
-(void)setUserRequestState:(unsigned long long)arg1 ;
-(void)setUsersByUserId:(NSDictionary *)arg1 ;
-(void)setRequestedUserIds:(NSSet *)arg1 ;
-(MNThreadViewModelLoadResult *)threadViewModelLoadResult;
-(void)setThreadViewModelLoadResult:(MNThreadViewModelLoadResult *)arg1 ;
-(unsigned long long)requestId;
-(void)setRequestId:(unsigned long long)arg1 ;
-(MNIndexedAppMessageSet *)messages;
-(void)setMessages:(MNIndexedAppMessageSet *)arg1 ;
@end

