//
//  PlaneDetector.h
//  Measure
//
//  Created by Sanjeet on 07/08/18.
//  Copyright © 2018 Sanjeet. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <SceneKit/SceneKit.h>

@interface PlaneDetector : NSObject

+ (SCNVector4)detectPlaneWithPoints:(NSArray <NSValue* >*)points;


@end
