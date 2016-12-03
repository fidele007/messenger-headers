/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString, NSNumber;

@interface FBMediaGalleryBottomBarButtonItem : FBValueObject <NSCopying> {

	UIImage* _buttonImage;
	NSString* _buttonTitle;
	NSString* _buttonAccessibilityLabel;
	NSNumber* _buttonID;
	SEL _buttonAction;

}

@property (nonatomic,copy,readonly) UIImage * buttonImage;                            //@synthesize buttonImage=_buttonImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonAccessibilityLabel;              //@synthesize buttonAccessibilityLabel=_buttonAccessibilityLabel - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * buttonID;                              //@synthesize buttonID=_buttonID - In the implementation block
@property (nonatomic,readonly) SEL buttonAction;                                      //@synthesize buttonAction=_buttonAction - In the implementation block
-(id)initWithButtonImage:(id)arg1 buttonTitle:(id)arg2 buttonAccessibilityLabel:(id)arg3 buttonID:(id)arg4 buttonAction:(SEL)arg5 ;
-(NSString *)buttonAccessibilityLabel;
-(UIImage *)buttonImage;
-(SEL)buttonAction;
-(NSString *)buttonTitle;
-(NSNumber *)buttonID;
@end

