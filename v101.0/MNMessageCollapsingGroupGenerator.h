/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class MNMessageCollapsingGroupGeneratorInjector, NSString;

@interface MNMessageCollapsingGroupGenerator : NSObject <FBClassInjectable> {

	MNMessageCollapsingGroupGeneratorInjector* _injector;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(BOOL)isMessageCollapsibleGroup:(id)arg1 withAppMessage:(id)arg2 withNextMessageViewModel:(id)arg3 withNextAppMessage:(id)arg4 forThread:(id)arg5 ;
-(BOOL)isMessageCollapsibleGroup:(id)arg1 withAppMessage:(id)arg2 withPreviousMessageViewModel:(id)arg3 withPreviousAppMessage:(id)arg4 forThread:(id)arg5 ;
-(BOOL)_shouldShowCollapsibleMessageGroupsForThread:(id)arg1 ;
@end

