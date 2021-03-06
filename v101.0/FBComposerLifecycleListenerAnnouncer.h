/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBComposerLifecycleListener.h>

@class NSString;

@interface FBComposerLifecycleListenerAnnouncer : FBAnnouncerBase <FBComposerLifecycleListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)composerCreatedWithBootstrapContent:(id)arg1 bootstrapAnalyticsPayload:(id)arg2 ;
-(void)composerDisplayedWithCompositionState:(id)arg1 ;
-(void)composerCompletedWithComposedResult:(id)arg1 compositionState:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

