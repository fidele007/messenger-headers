/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

