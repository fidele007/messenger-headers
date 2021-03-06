/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNSingleUserRequestFilter : FBValueObject <NSCopying> {

	BOOL _allowEmailUsers;
	NSString* _userId;

}

@property (nonatomic,copy,readonly) NSString * userId;              //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) BOOL allowEmailUsers;                //@synthesize allowEmailUsers=_allowEmailUsers - In the implementation block
-(id)initWithUserId:(id)arg1 allowEmailUsers:(BOOL)arg2 ;
-(BOOL)allowEmailUsers;
-(NSString *)userId;
@end

