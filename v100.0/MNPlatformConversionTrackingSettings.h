/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSingletonClassProvidable.h>

@class NSUserDefaults, NSString;

@interface MNPlatformConversionTrackingSettings : NSObject <FBSingletonClassProvidable> {

	NSUserDefaults* _userDefaults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)lastLoggedTimeForTrackingEventName:(id)arg1 ;
-(void)setLastLoggedTime:(id)arg1 forTrackingEventName:(id)arg2 ;
-(id)_objectForTrackingEventName:(id)arg1 ;
-(void)_setObject:(id)arg1 forTrackingEventName:(id)arg2 ;
-(void)_setPlatformConversionTrackingDictionary:(id)arg1 ;
-(id)_platformConversionTrackingDictionary;
-(void)purgeAllTrackingEventEntries;
-(void)_removeObjectForTrackingEventName:(id)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
@end
