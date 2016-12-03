/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, FBUserSession, NSSet, NSString;


@protocol FBAvatarTaggingSearchProviderProtocol <NSObject>
@property (nonatomic,copy) NSArray * avatarCollections; 
@property (nonatomic,readonly) BOOL canTagSelf; 
@property (nonatomic,readonly) FBUserSession * session; 
@property (nonatomic,copy) NSSet * excludedIDs; 
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults; 
@property (nonatomic,copy) NSString * loggingSessionID; 
@required
-(void)setLoggingSessionID:(id)arg1;
-(BOOL)isFetchingResults;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(NSArray *)avatarCollections;
-(void)setAvatarCollections:(id)arg1;
-(BOOL)canTagSelf;
-(NSSet *)excludedIDs;
-(void)setExcludedIDs:(id)arg1;
-(NSString *)loggingSessionID;
-(FBUserSession *)session;

@end

