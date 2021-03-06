/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsStateFlatButtonViewModel : FBValueObject <NSCopying> {

	BOOL _shouldConfirm;
	NSString* _actionTitle;
	NSString* _confirmationTitle;

}

@property (nonatomic,copy,readonly) NSString * actionTitle;                    //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * confirmationTitle;              //@synthesize confirmationTitle=_confirmationTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldConfirm;                             //@synthesize shouldConfirm=_shouldConfirm - In the implementation block
-(id)initWithActionTitle:(id)arg1 confirmationTitle:(id)arg2 shouldConfirm:(BOOL)arg3 ;
-(BOOL)shouldConfirm;
-(NSString *)confirmationTitle;
-(NSString *)actionTitle;
@end

