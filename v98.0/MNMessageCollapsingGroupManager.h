/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class MNMessageCollapsingGroupManagerInjector, NSMutableDictionary, NSString;

@interface MNMessageCollapsingGroupManager : NSObject <FBClassInjectable> {

	MNMessageCollapsingGroupManagerInjector* _injector;
	NSMutableDictionary* _expandedMessageKeysByThreadId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(BOOL)isCollapsibleGroupStartingWithMessageKeyExpanded:(id)arg1 inThreadWithIdentifier:(id)arg2 ;
-(void)collapseCollapsibleGroupStartingWithMessageKey:(id)arg1 inThreadWithIdentifier:(id)arg2 ;
-(void)expandCollapsibleGroupStartingWithMessageKey:(id)arg1 inThreadWithIdentifier:(id)arg2 ;
-(void)collapseAllGroupsInThreadWithIdentifier:(id)arg1 ;
@end

