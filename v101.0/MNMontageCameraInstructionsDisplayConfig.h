/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNMontageCameraInstructionsDisplayConfig : FBValueObject <NSCopying> {

	BOOL _displayInstructionsAnimated;
	NSString* _instructionsText;
	double _instructionsDisplayDuration;

}

@property (nonatomic,copy,readonly) NSString * instructionsText;                //@synthesize instructionsText=_instructionsText - In the implementation block
@property (nonatomic,readonly) double instructionsDisplayDuration;              //@synthesize instructionsDisplayDuration=_instructionsDisplayDuration - In the implementation block
@property (nonatomic,readonly) BOOL displayInstructionsAnimated;                //@synthesize displayInstructionsAnimated=_displayInstructionsAnimated - In the implementation block
-(id)initWithInstructionsText:(id)arg1 instructionsDisplayDuration:(double)arg2 displayInstructionsAnimated:(BOOL)arg3 ;
-(BOOL)displayInstructionsAnimated;
-(double)instructionsDisplayDuration;
-(NSString *)instructionsText;
@end
