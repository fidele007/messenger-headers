/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@protocol FBMapSnapshotNodeDelegate;
@class FBUserSession, ASDisplayNode, ASImageNode, NSArray, NSMutableArray;

@interface FBMapSnapshotNode : ASDisplayNode {

	FBUserSession* _session;
	ASDisplayNode* _transformNode;
	ASDisplayNode* _edgeReflectingNode;
	ASImageNode* _mapImageNode;
	NSArray* _pinNodes;
	mutex _pinPointLock;
	NSMutableArray* _pinPoints;
	id<FBMapSnapshotNodeDelegate> _delegate;
	double _heading;
	double _pitch;
	double _pointAnnotationScale;
	unsigned long long _mapType;
	NSArray* _pointAnnotations;
	CGSize _mapSize;
	SCD_Struct_FB95 _region;

}

@property (assign,nonatomic) unsigned long long mapType;                                 //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) SCD_Struct_FB96 region;                                     //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSArray * pointAnnotations;                                   //@synthesize pointAnnotations=_pointAnnotations - In the implementation block
@property (assign,nonatomic,__weak) id<FBMapSnapshotNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize mapSize;                                             //@synthesize mapSize=_mapSize - In the implementation block
@property (assign,nonatomic) double heading;                                             //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch;                                               //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double pointAnnotationScale;                                //@synthesize pointAnnotationScale=_pointAnnotationScale - In the implementation block
-(void)_staticInitialize;
-(void)setPointAnnotations:(NSArray *)arg1 ;
-(NSArray *)pointAnnotations;
-(void)setPointAnnotationScale:(double)arg1 ;
-(double)pointAnnotationScale;
-(id)_createPinNode;
-(void)_setFrame:(CGRect)arg1 ofTransformedNode:(id)arg2 ;
-(void)_performSnapshotWithSize:(CGSize)arg1 ;
-(BOOL)_needsSnapshotWithSize:(CGSize)arg1 ;
-(void)_didFinishSnapshot:(id)arg1 ;
-(void)_didDisplaySnapshot;
-(void)_updateCameraTransform;
-(id)initWithMapType:(unsigned long long)arg1 region:(SCD_Struct_FB96)arg2 pointAnnotations:(id)arg3 session:(id)arg4 ;
-(BOOL)containsPinAtPoint:(CGPoint)arg1 withSlop:(UIEdgeInsets)arg2 ;
-(void)setMapSize:(CGSize)arg1 ;
-(void)setDelegate:(id<FBMapSnapshotNodeDelegate>)arg1 ;
-(id<FBMapSnapshotNodeDelegate>)delegate;
-(void)layout;
-(void)setRegion:(SCD_Struct_FB96)arg1 ;
-(SCD_Struct_FB96)region;
-(void)setHeading:(double)arg1 ;
-(double)heading;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(void)didLoad;
-(CGSize)mapSize;
@end
