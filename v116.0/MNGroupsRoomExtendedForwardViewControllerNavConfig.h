/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNGroupsRoomExtendedForwardViewControllerNavConfig : FBValueObject <NSCopying> {

	NSString* _title;
	unsigned long long _navBarButtonType;

}

@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long navBarButtonType;              //@synthesize navBarButtonType=_navBarButtonType - In the implementation block
-(id)initWithTitle:(id)arg1 navBarButtonType:(unsigned long long)arg2 ;
-(unsigned long long)navBarButtonType;
-(NSString *)title;
@end

