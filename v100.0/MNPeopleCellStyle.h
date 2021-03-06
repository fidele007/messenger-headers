/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNPeopleCellStyle : FBValueObject <NSCopying> {

	BOOL _canShowContextInTwoLines;
	BOOL _shouldUseLargeProfileImage;
	UIColor* _backgroundColor;
	UIColor* _selectedBackgroundColor;
	UIColor* _textColor;
	UIColor* _detailTextColor;
	UIColor* _separatorColor;
	long long _accessoryType;

}

@property (nonatomic,copy,readonly) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * selectedBackgroundColor;              //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textColor;                            //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * detailTextColor;                      //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * separatorColor;                       //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,readonly) long long accessoryType;                             //@synthesize accessoryType=_accessoryType - In the implementation block
@property (nonatomic,readonly) BOOL canShowContextInTwoLines;                       //@synthesize canShowContextInTwoLines=_canShowContextInTwoLines - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLargeProfileImage;                     //@synthesize shouldUseLargeProfileImage=_shouldUseLargeProfileImage - In the implementation block
-(UIColor *)selectedBackgroundColor;
-(id)initWithBackgroundColor:(id)arg1 selectedBackgroundColor:(id)arg2 textColor:(id)arg3 detailTextColor:(id)arg4 separatorColor:(id)arg5 accessoryType:(long long)arg6 canShowContextInTwoLines:(BOOL)arg7 shouldUseLargeProfileImage:(BOOL)arg8 ;
-(BOOL)shouldUseLargeProfileImage;
-(BOOL)canShowContextInTwoLines;
-(UIColor *)backgroundColor;
-(UIColor *)separatorColor;
-(long long)accessoryType;
-(UIColor *)textColor;
-(UIColor *)detailTextColor;
@end

