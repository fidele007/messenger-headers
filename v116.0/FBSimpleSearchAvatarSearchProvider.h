/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAvatarTaggingSearchProviderProtocol.h>

@protocol FBSimpleSearchAvatarProviderDelegate;
@class NSMutableArray, NSString, NSArray, FBUserSession, NSSet;

@interface FBSimpleSearchAvatarSearchProvider : NSObject <FBAvatarTaggingSearchProviderProtocol> {

	NSMutableArray* _foundAvatars;
	NSString* _searchTerm;
	id _downloadHandle;
	BOOL _canTagSelf;
	BOOL _fetchingResults;
	NSArray* _avatarCollections;
	FBUserSession* _session;
	NSSet* _excludedIDs;
	NSString* _loggingSessionID;
	id<FBSimpleSearchAvatarProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSimpleSearchAvatarProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * avatarCollections;                                             //@synthesize avatarCollections=_avatarCollections - In the implementation block
@property (nonatomic,readonly) BOOL canTagSelf;                                                     //@synthesize canTagSelf=_canTagSelf - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSSet * excludedIDs;                                                     //@synthesize excludedIDs=_excludedIDs - In the implementation block
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults;                       //@synthesize fetchingResults=_fetchingResults - In the implementation block
@property (nonatomic,copy) NSString * loggingSessionID;                                             //@synthesize loggingSessionID=_loggingSessionID - In the implementation block
-(BOOL)isFetchingResults;
-(void)setAvatarCollections:(NSArray *)arg1 ;
-(void)setLoggingSessionID:(NSString *)arg1 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)avatarCollections;
-(BOOL)canTagSelf;
-(NSSet *)excludedIDs;
-(void)setExcludedIDs:(NSSet *)arg1 ;
-(NSString *)loggingSessionID;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 ;
-(void)_downloadDataWithCompletion:(/*^block*/id)arg1 fetchLimit:(unsigned long long)arg2 ;
-(void)_resetFoundAvatars;
-(id)initWithCollections:(id)arg1 canTagSelf:(BOOL)arg2 session:(id)arg3 ;
-(void)setDelegate:(id<FBSimpleSearchAvatarProviderDelegate>)arg1 ;
-(id<FBSimpleSearchAvatarProviderDelegate>)delegate;
-(FBUserSession *)session;
-(void)_cancelRequests;
@end

