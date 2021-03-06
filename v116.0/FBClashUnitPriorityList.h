/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBElevatedPriorityClashUnitDataSource;
#import <Messenger/Messenger-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSString;

@interface FBClashUnitPriorityList : NSObject {

	NSMutableArray* _clashUnits;
	NSMutableDictionary* _countedClashUnitsByClashName;
	NSString* _location;
	mutex _clashUnitLock;
	id<FBElevatedPriorityClashUnitDataSource> _elevatedPriorityDataSource;

}
-(void)resetPriorities:(BOOL)arg1 resetNumberOfTimesShown:(BOOL)arg2 ;
-(void)_resortList;
-(id)initWithLocation:(id)arg1 elevatedPriorityDataSource:(id)arg2 ;
-(id)clashUnits;
-(void)registerClashUnit:(id)arg1 withInitialPriority:(unsigned long long)arg2 ;
-(void)unregisterClashUnit:(id)arg1 ;
-(id)nextAvailableClashUnitWithName:(id)arg1 ;
-(BOOL)incrementCountForClashUnitWithName:(id)arg1 ;
-(unsigned long long)countForClashUnitWithName:(id)arg1 ;
-(id)location;
@end

