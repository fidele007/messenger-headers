/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPageUnlikeCoreMutationOptimisticPayloadFactoryProtocol.h>

@class FBMemPage, NSString;

@interface DEPRECATED_FBPageUnlikeCoreMutationOptimisticPayloadFactory : NSObject <FBPageUnlikeCoreMutationOptimisticPayloadFactoryProtocol> {

	FBMemPage* _page;
	BOOL _optimisticallySetSubscribeStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)optimisticPayload:(id)arg1 ;
-(id)rollbackOptimisticPayload:(id)arg1 ;
-(id)initWithPage:(id)arg1 optimisticallySetSubscribeStatus:(BOOL)arg2 ;
-(id)buildPageFromInput:(id)arg1 withDoesLikePage:(id)arg2 likerCount:(id)arg3 subscribeStatus:(id)arg4 ;
@end
