/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBPageSeeAllPageAppointmentsIntentTarget : FBIntentTarget {

	NSString* _pageID;

}

@property (nonatomic,copy,readonly) NSString * pageID;              //@synthesize pageID=_pageID - In the implementation block
+(id)targetWithPageID:(id)arg1 ;
-(id)fallbackURLs;
-(id)initWithPageID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)pageID;
@end
