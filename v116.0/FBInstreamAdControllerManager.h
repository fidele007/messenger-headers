/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBInstreamAdControllerManager : NSObject {

	NSMutableDictionary* _instreamAdControllerMap;

}

@property (nonatomic,retain) NSMutableDictionary * instreamAdControllerMap;              //@synthesize instreamAdControllerMap=_instreamAdControllerMap - In the implementation block
+(id)_controllerKeyWithVideo:(id)arg1 ;
+(id)_controllerKeyWithVideoID:(id)arg1 isLiveStreaming:(BOOL)arg2 ;
+(BOOL)hasInstreamAdBreakWithVideo:(id)arg1 ;
-(id)controllerIfExistsWithVideoID:(id)arg1 isLiveStreaming:(BOOL)arg2 ;
-(id)_registerControllerWithSession:(id)arg1 story:(id)arg2 video:(id)arg3 playerOrigin:(id)arg4 playerSubOrigin:(id)arg5 intentHandler:(id)arg6 ;
-(id)controllerWithSession:(id)arg1 story:(id)arg2 video:(id)arg3 playerOrigin:(id)arg4 playerSubOrigin:(id)arg5 intentHandler:(id)arg6 ;
-(void)unregisterControllerWithVideoID:(id)arg1 isLiveStreaming:(BOOL)arg2 ;
-(NSMutableDictionary *)instreamAdControllerMap;
-(void)setInstreamAdControllerMap:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

