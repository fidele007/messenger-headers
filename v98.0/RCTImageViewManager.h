/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTViewManager.h>

@interface RCTImageViewManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_blurRadius;
+(id)propConfig_capInsets;
+(id)propConfig_defaultSource;
+(id)propConfig_onLoadStart;
+(id)propConfig_onProgress;
+(id)propConfig_onError;
+(id)propConfig_onPartialLoad;
+(id)propConfig_onLoad;
+(id)propConfig_onLoadEnd;
+(id)propConfig_resizeMode;
+(id)propConfig_source;
+(id)propConfig_tintColor;
+(id)__rct_export__500;
+(id)__rct_export__641;
+(void)load;
-(void)set_tintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)getSize:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)prefetchImage:(id)arg1 resolve:(/*^block*/id)arg2 reject:(/*^block*/id)arg3 ;
-(id)view;
@end
