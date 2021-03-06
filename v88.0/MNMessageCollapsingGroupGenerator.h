/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(BOOL)isMessageCollapsibleGroup:(id)arg1 withNextMessage:(id)arg2 forThread:(id)arg3 ;
-(BOOL)isMessageCollapsibleGroup:(id)arg1 withPreviousMessage:(id)arg2 forThread:(id)arg3 ;
-(BOOL)_shouldShowCollapsibleMessageGroupsForThread:(id)arg1 ;
@end

