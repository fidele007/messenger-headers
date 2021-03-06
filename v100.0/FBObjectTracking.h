/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBObjectTracking : NSObject {

	CVBufferRef trackingImageBuffer;
	mutex _imageBuffersMutex;
	mutex _trackingMutex;
	unique_ptr<TrackerKCF, std::__1::default_delete<TrackerKCF> >* _tracker;
	/*^block*/id _didReceiveNewRegion;

}

@property (nonatomic,copy) id didReceiveNewRegion;              //@synthesize didReceiveNewRegion=_didReceiveNewRegion - In the implementation block
-(void)updateWithPixelBuffer:(CVBufferRef)arg1 ;
-(id)initWithModelPath:(id)arg1 ;
-(void)addRegion:(CGRect)arg1 forPixelBufferSize:(CGSize)arg2 ;
-(void)setDidReceiveNewRegion:(id)arg1 ;
-(id)didReceiveNewRegion;
@end

