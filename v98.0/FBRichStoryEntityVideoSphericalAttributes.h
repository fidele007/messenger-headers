/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntitySphericalVideoProtocol.h>

@protocol FBRichStoryEntitySphericalVideoGuidedTourProtocol;
@class NSString;

@interface FBRichStoryEntityVideoSphericalAttributes : NSObject <FBRichStoryEntitySphericalVideoProtocol> {

	BOOL _enableFocus;
	float _offFocusLevel;
	float _focusWidthDegrees;
	double _initialViewHeadingDegrees;
	double _initialViewPitchDegrees;
	double _initialViewRollDegrees;
	double _sphericalPreferredFov;
	NSString* _projectionType;
	id<FBRichStoryEntitySphericalVideoGuidedTourProtocol> _guidedTour;

}

@property (nonatomic,copy) NSString * projectionType;                                                       //@synthesize projectionType=_projectionType - In the implementation block
@property (nonatomic,retain) id<FBRichStoryEntitySphericalVideoGuidedTourProtocol> guidedTour;              //@synthesize guidedTour=_guidedTour - In the implementation block
@property (nonatomic,readonly) double initialViewHeadingDegrees;                                            //@synthesize initialViewHeadingDegrees=_initialViewHeadingDegrees - In the implementation block
@property (nonatomic,readonly) double initialViewPitchDegrees;                                              //@synthesize initialViewPitchDegrees=_initialViewPitchDegrees - In the implementation block
@property (nonatomic,readonly) double initialViewRollDegrees;                                               //@synthesize initialViewRollDegrees=_initialViewRollDegrees - In the implementation block
@property (nonatomic,readonly) double sphericalPreferredFov;                                                //@synthesize sphericalPreferredFov=_sphericalPreferredFov - In the implementation block
@property (nonatomic,readonly) BOOL enableFocus;                                                            //@synthesize enableFocus=_enableFocus - In the implementation block
@property (nonatomic,readonly) float offFocusLevel;                                                         //@synthesize offFocusLevel=_offFocusLevel - In the implementation block
@property (nonatomic,readonly) float focusWidthDegrees;                                                     //@synthesize focusWidthDegrees=_focusWidthDegrees - In the implementation block
-(double)initialViewHeadingDegrees;
-(double)initialViewPitchDegrees;
-(double)sphericalPreferredFov;
-(id<FBRichStoryEntitySphericalVideoGuidedTourProtocol>)guidedTour;
-(NSString *)projectionType;
-(double)initialViewRollDegrees;
-(BOOL)enableFocus;
-(float)offFocusLevel;
-(float)focusWidthDegrees;
-(id)initWithProjectionType:(id)arg1 initialViewHeadingDegrees:(double)arg2 initialViewPitchDegrees:(double)arg3 initialViewRollDegrees:(double)arg4 sphericalPreferredFov:(double)arg5 guidedTour:(id)arg6 enableFocus:(BOOL)arg7 offFocusLevel:(float)arg8 focusWidthDegrees:(float)arg9 ;
-(void)setProjectionType:(NSString *)arg1 ;
-(void)setGuidedTour:(id<FBRichStoryEntitySphericalVideoGuidedTourProtocol>)arg1 ;
@end

