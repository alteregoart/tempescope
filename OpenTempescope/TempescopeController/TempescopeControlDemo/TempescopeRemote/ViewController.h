/*
 ViewController.h
 Released as part of the OpenTempescope project - http://tempescope.com/opentempescope/
 Copyright (c) 2013 Ken Kawamoto.  All right reserved.
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *btnConnect;
@property (weak, nonatomic) IBOutlet UISlider *sliderTime;
@property (weak, nonatomic) IBOutlet UISegmentedControl *btnWeatherType;
@property (weak, nonatomic) IBOutlet UISwitch *btnLightning;

@property (weak, nonatomic) IBOutlet UISlider *sliderDebug1;

- (IBAction)doConnectDisconnect:(id)sender;

- (IBAction)updateWeather:(id)sender;
- (IBAction)playDemo:(id)sender;
- (IBAction)playDefaultDemo:(id)sender;
- (IBAction)saveWeather:(id)sender;

- (IBAction)debug1:(id)sender;

@end
