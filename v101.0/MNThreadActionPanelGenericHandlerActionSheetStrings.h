/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNThreadActionPanelGenericHandlerActionSheetStrings : FBValueObject <NSCopying> {

	NSString* _titleText;
	NSString* _message;
	NSString* _confirmButtonText;

}

@property (nonatomic,copy,readonly) NSString * titleText;                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmButtonText;              //@synthesize confirmButtonText=_confirmButtonText - In the implementation block
-(id)initWithTitleText:(id)arg1 message:(id)arg2 confirmButtonText:(id)arg3 ;
-(NSString *)confirmButtonText;
-(NSString *)message;
-(NSString *)titleText;
@end

