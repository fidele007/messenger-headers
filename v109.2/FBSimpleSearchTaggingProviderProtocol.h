/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBSimpleSearchTaggingProviderProtocol <FBAvatarTaggingSearchProviderProtocol>
@property (nonatomic,copy) NSString * authorType; 
@required
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 explicitMention:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6;
-(BOOL)shouldCreateTaggableUserCollectionForTargetType:(id)arg1;
-(NSString *)authorType;
-(void)setAuthorType:(id)arg1;

@end

