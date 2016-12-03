/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNComposerOverflowTabViewModel : FBValueObject <NSCopying> {

	BOOL _showsTopSeparator;
	BOOL _showsPreview;
	NSString* _title;
	NSString* _subtitle;
	unsigned long long _accessoryType;
	NSString* _extensionIdentifier;
	long long _iconRenderingMode;

}

@property (nonatomic,copy,readonly) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long accessoryType;                 //@synthesize accessoryType=_accessoryType - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL showsTopSeparator;                           //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (nonatomic,readonly) BOOL showsPreview;                                //@synthesize showsPreview=_showsPreview - In the implementation block
@property (nonatomic,readonly) long long iconRenderingMode;                      //@synthesize iconRenderingMode=_iconRenderingMode - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 accessoryType:(unsigned long long)arg3 extensionIdentifier:(id)arg4 showsTopSeparator:(BOOL)arg5 showsPreview:(BOOL)arg6 iconRenderingMode:(long long)arg7 ;
-(BOOL)showsPreview;
-(long long)iconRenderingMode;
-(NSString *)extensionIdentifier;
-(NSString *)title;
-(unsigned long long)accessoryType;
-(NSString *)subtitle;
-(BOOL)showsTopSeparator;
@end
