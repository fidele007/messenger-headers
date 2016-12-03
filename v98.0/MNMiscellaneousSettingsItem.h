/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNMiscellaneousSettingsItem : FBValueObject <NSCopying> {

	BOOL _hideActionBarButton;
	NSString* _title;
	NSURL* _URL;
	NSString* _analyticsLabel;

}

@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsLabel;              //@synthesize analyticsLabel=_analyticsLabel - In the implementation block
@property (nonatomic,readonly) BOOL hideActionBarButton;                    //@synthesize hideActionBarButton=_hideActionBarButton - In the implementation block
-(id)initWithTitle:(id)arg1 URL:(id)arg2 analyticsLabel:(id)arg3 hideActionBarButton:(BOOL)arg4 ;
-(NSString *)analyticsLabel;
-(BOOL)hideActionBarButton;
-(NSString *)title;
-(NSURL *)URL;
@end

