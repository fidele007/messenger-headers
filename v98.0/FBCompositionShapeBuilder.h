/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBCompositionShapeBuilder : NSObject {

	NSString* _name;
	NSString* _klass;
	NSString* _color;
	double _lineWidth;
	double _rotation;
	BOOL _filled;
	NSArray* _properties;
	double _cornerRadius;

}
+(id)aCompositionShape;
+(id)aCompositionShapeFromExistingCompositionShape:(id)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withColor:(id)arg1 ;
-(id)withProperties:(id)arg1 ;
-(id)withKlass:(id)arg1 ;
-(id)withLineWidth:(double)arg1 ;
-(id)withRotation:(double)arg1 ;
-(id)withFilled:(BOOL)arg1 ;
-(id)withCornerRadius:(double)arg1 ;
-(id)build;
@end

