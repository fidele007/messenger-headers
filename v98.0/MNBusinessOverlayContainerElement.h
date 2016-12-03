/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MNBusinessOverlayContainerElement : FBValueObject <NSCopying> {

	id _viewModel;
	unsigned long long _horizontalAlignment;
	unsigned long long _verticalAlignment;
	UIColor* _backgroundColor;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy,readonly) id viewModel;                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                                 //@synthesize insets=_insets - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalAlignment;              //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalAlignment;                //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)initWithViewModel:(id)arg1 insets:(UIEdgeInsets)arg2 horizontalAlignment:(unsigned long long)arg3 verticalAlignment:(unsigned long long)arg4 backgroundColor:(id)arg5 ;
-(UIColor *)backgroundColor;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(UIEdgeInsets)insets;
-(id)viewModel;
@end

